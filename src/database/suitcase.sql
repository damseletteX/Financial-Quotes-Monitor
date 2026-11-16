/* store quotes the user chose to
track and the borders of the price */

PRAGMA foreign_keys = ON; 

CREATE TABLE IF NOT EXISTS Assets (
    id INTEGER PRIMARY KEY,
    token TEXT NOT NULL UNIQUE,
    target_price REAL NOT NULL,
    enabled INTEGER NOT NULL DEFAULT 1 -- since sqlite has no bool

);

create TABLE IF NOT EXISTS Users (
    user_id INTEGER 
    username TEXT NOT NULL UNIQUE,
    password_hash TEXT NOT NULL UNIQUE, 
    email TEXT,
)