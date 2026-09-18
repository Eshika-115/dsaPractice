# Write your MySQL query statement below
SELECT 
ROUND(avg(ORDER_DATE = CUSTOMER_PREF_DELIVERY_DATE) *100 , 2) as immediate_percentage
FROM delivery d
where (customer_id , order_date) in (
select customer_id , min(order_date)
from delivery d
group by customer_id
)