SELECT e.name AS Employee
FROM Employee e
where salary > (select salary from Employee m where id=e.managerId)