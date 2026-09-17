# Write your MySQL query statement below
SELECT s.user_id ,
ROUND(
    AVG(CASE WHEN C.action = 'Confirmed' then 1 else 0 end ), 2
) as confirmation_rate

FROM Signups S
left JOIN Confirmations C
ON S.user_id = C.user_id  
GROUP BY s.user_id