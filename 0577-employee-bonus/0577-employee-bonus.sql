# Write your MySQL query statement below
SELECT E.name , B.bonus 
FROM Employee E
LEFT join Bonus B
on E.empId = B.empId
where B.bonus < 1000 or B.bonus is NULL 


