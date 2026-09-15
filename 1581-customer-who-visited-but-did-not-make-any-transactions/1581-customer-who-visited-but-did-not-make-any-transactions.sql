# Write your MySQL query statement below
SELECT v.customer_id , count(*) as count_no_trans
FROM Visits v
left JOIN Transactions t
ON t.visit_id = v.visit_id
where t.transaction_id IS NULL 
GROUP BY v.customer_id