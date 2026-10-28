PRAGMA FOREIGN

CREATE TABLE users (
    /*user_id INTEGER UNIQUE NOT NULL,*/
    username TEXT UNIQUE NOT NULL,
    pass_hash TEXT NOT NULL
);

CREATE TABLE quotes(
    quote_name TEXT NOT NULL,
    lower_boundary FLOAT NOT NULL,
    upper_boundary FLOAT NOT NULL,

);

CREATE INDEX user_id ON users(username);