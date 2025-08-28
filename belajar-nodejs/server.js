var http = require('http');
const mysql = require('mysql2');
const url = require('url');

const db = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: '',
    database: 'latihan_node'
});

db.connect((err) => {
    if (err) throw err;
    console.log('MySQL connected!');
});

const server = http.createServer((req,res) => {
    const parsedUrl = url.parse(req.url, true);

    if (req.method === 'GET' && parsedUrl.pathname === '/user') {
        db.query('SELECT * FROM user', (err, results) => {
            if (err) {
                res.writeHead(500);
                return res.end('Database error');
            }
            res.writeHead(200, { 'Content-Type': 'application/json'});
            res.end(JSON.stringify(results));
        });

    }else if (req.method === 'POST' && parsedUrl.pathname === '/user') {
        let body = '';
        req.on('data', chunk => {
            body += chunk;
        });

    req.on('end', () => {
        try {
            const { name,password } = JSON.parse(body);
            db.query('INSERT INTO user (name, password) VALUES (?, ?)', [name, password], (err) => {
                if (err) {
                    res.writeHead(500);
                    return res.end('Insert failed');
                }
                res.writeHead(200);
                res.end('User added!');
            });
        } catch (e) {
            res.writeHead(400);
            res.end('Invalid JSON');
        }
    });

    } else {
        res.writeHead(404);
        res.end('Not Found');
    }
}).listen(8000);

console.log('Server running on http://localhost:8000');


// http.createServer(function (request, response){
//     response.writeHead(200, {'Content-Type' : 'text/html'});
//     switch(request.url){
//         case '/about':
//             response.write("Ini adalah halaman about");
//             break;
//         case '/profile':
//             response.write("Ini adalah halaman profile");
//             break;
//         case '/produk':
//             response.write("Ini adalah halaman produk");
//             break;
//         default:
//             response.write("404: Halaman tidak ditemukan");
//     }
// response.end();
// }).listen(8000);


// console.log("server running on http://localhost:8000");


