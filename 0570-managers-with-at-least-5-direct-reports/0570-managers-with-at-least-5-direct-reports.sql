# Write your MySQL query statement below
SELECT e.name
FROM Employee e
INNER Join Employee e1
on e.id = e1.managerId
group by e1.managerId
having count(e1.managerId) >= 5
