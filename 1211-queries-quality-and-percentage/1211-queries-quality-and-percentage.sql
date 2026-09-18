# Write your MySQL query statement below
SELECT q.query_name , ROUND(avg(q.rating/q.position),2 )as quality , 

ROUND(
SUM(CASE WHEN rating < 3 THEN 1 ELSE 0 END) * 100.0 /
    
    COUNT(*) , 2 ) as poor_query_percentage
    FROM QUERIES Q
    GROUP BY Q.QUERY_NAME
