CREATE USER IF NOT EXISTS 'quickfix'@'localhost';
GRANT INSERT, UPDATE, DELETE, SELECT ON quickfix.* TO 'quickfix'@'localhost';