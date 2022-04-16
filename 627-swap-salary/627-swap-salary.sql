# Write your MySQL query statement below
UPDATE Salary 
SET sex = 
CASE
    when sex = 'm' THEN 'f'
    else 'm'
    end