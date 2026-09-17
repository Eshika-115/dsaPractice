# Write your MySQL query statement below
SELECT p.product_id ,
 ROUND(COALESCE(
    sum(p.price * u.units)/ sum(u.units), 0 ), 2
 )
     AS average_price
FROM Prices p
 left JOIN UnitsSold u
ON p.product_id = u.product_id 
AND
u.purchase_date between p.start_date and p.end_date
group by p.product_id

