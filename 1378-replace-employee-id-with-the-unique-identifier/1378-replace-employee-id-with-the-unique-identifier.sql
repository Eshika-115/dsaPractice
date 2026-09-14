# Write your MySQL query statement below
SELECT Eu.unique_id , e.name 
FROM Employees e
LEFT JOIN EmployeeUNI Eu
on e.id = Eu.id
