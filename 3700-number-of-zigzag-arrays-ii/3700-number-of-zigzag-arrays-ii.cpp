class Solution {
public:
    static constexpr int MOD = 1e9 + 7;
    using ll = long long;
    using Mat = vector<vector<ll>>;

    Mat mul(Mat& A, Mat& B) {
        int n = A.size();
        Mat C(n, vector<ll>(n));
        for (int i = 0; i < n; i++)
            for (int k = 0; k < n; k++) if (A[i][k])
                for (int j = 0; j < n; j++)
                    C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
        return C;
    }

    Mat power(Mat A, long long p) {
        int n = A.size();
        Mat R(n, vector<ll>(n));
        for (int i = 0; i < n; i++) R[i][i] = 1;
        while (p) {
            if (p & 1) R = mul(R, A);
            A = mul(A, A);
            p >>= 1;
        }
        return R ;
    }

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;
        if (n == 1) return m;

        Mat U(m, vector<ll>(m)), D(m, vector<ll>(m));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < i; j++) U[i][j] = 1;       // go down
            for (int j = i + 1; j < m; j++) D[i][j] = 1;   // go up
        }

        Mat M = mul(U, D);
        M = power(M, (n - 1) / 2);
        if ((n - 1) & 1) M = mul(M, U);

        ll ans = 0;
        for (auto& row : M)
            for (ll x : row)
                ans = (ans + x) % MOD;

        return ans * 2 % MOD;
    }
};