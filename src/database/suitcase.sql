/* store quotes the user chose to
track and the borders of the price */

CREATE TABLE assets (
    id INTEGER PRIMARY KEY,
    token TEXT NOT NULL UNIQUE,
    target_price REAL NOT NULL,
    enabled INTEGER NOT NULL DEFAULT 1 -- since sqlite has no bool
);

