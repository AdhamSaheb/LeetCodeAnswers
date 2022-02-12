# Write your MySQL query statement below
SELECT distinct class from Courses c1
where(
    SELECT COUNT(*) from Courses c2 
    where c2.class = c1.class) >= 5
    