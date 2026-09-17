# Write your MySQL query statement below
SELECT r.contest_id , 
ROUND(
count(r.user_id) * 100.0 / (SELECT COUNT(*) 
FROM USERS) , 2)
AS percentage
FROM Register r
Group by r.contest_id
order by percentage desc , contest_id asc
