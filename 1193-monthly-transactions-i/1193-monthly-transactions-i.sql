# Write your MySQL query statement below
SELECT DATE_FORMAT(t.trans_date , '%Y-%m') as month , t.country , 
COUNT(*) AS trans_count ,
SUM(
    case when t.state ='approved' then 1 else 0 end ) as approved_count ,
    SUM(t.amount) as trans_total_amount, 
    SUM(CASE WHEN T.STATE ='APPROVED'  THEN t.amount else 0 END ) as approved_total_amount
FROM Transactions t
GROUP BY DATE_FORMAT(t.trans_date , '%Y-%m') , t.country 
