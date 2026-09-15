# Write your MySQL query statement below


SELECT W1.id
FROM Weather W1
join Weather W2
on datediff(W1.recordDate , W2.recordDate ) = 1
where W1.temperature > W2.temperature 
