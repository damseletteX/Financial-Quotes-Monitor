PRAGMA foreign_key = ON;

CREATE TABLE users (
    user_id INTEGER PRIMARY KEY,
    username TEXT UNIQUE NOT NULL,
    psw_hash TEXT NOT NULL
);

CREATE TABLE quotes(
    quote_name TEXT NOT NULL,
    lower_boundary FLOAT NOT NULL,
    upper_boundary FLOAT NOT NULL
);
