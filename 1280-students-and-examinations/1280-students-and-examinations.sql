# Write your MySQL query statement below
SELECT s.student_id , s.student_name , s1.subject_name , COUNT(e.subject_name) AS attended_exams
FROM Students s
CROSS JOIN Subjects s1

left JOIN Examinations e
on e.student_id = s.student_id
AND 
S1.SUBJECT_NAME = E.SUBJECT_NAME
group by s.student_id , s.student_name , s1.subject_name
order by s.student_id , s1.subject_name

