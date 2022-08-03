const express = require("express");

const app = express();
const router = express.Router();

router.use(express.urlencoded({ extended: true }));

//Frank Sinatra Data
const data = {
  wives: ["Nancy Barbato", "Ava Gardner", "Mia Farrow", "Barbara Marx"],
  songs: [
    "All Of Me",
    "All Or Nothing At All",
    "Almost Like Being In Love",
    "Come Fly With Me",
    "Cycles",
    "Ebb Tide",
    "Fly Me To The Moon",
    "Full Moon and Empty Arms",
    "High Hopes",
    "I'll Never Smile Again",
    "I'm A Fool To Want You",
    "I'm Not Afraid",
    "I've Got You Under My Skin",
    "In The Wee Small Hours Of The Morning",
    "It Had To Be You",
    "It Was A Very Good year",
    "Love And Marriage",
    "Luck Be A Lady",
    "Maureen Is A Champ",
    "My Kind of Town",
  ],
  name: "Francis Albert Sinatra",
  birth_date: "December 12, 1915",
  birth_city: "Hoboken, New Jersey",
  picture:
    "https://en.wikipedia.org/wiki/Frank_Sinatra#/media/File:Frank_Sinatra2, _Pal_Joey.jpg",
};

//Route to get Songs
router.get("/", (req, res) => {
  res.write(data.songs[Math.floor(Math.random() * data.songs.length)] + "\n");
  res.end();
});

//Route to get birth date
router.get("/birth_date", (req, res) => {
  res.write(data.birth_date);
  res.end();
});

//Route to get birth city
router.get("/birth_city", (req, res) => {
  res.write(data.birth_city);
  res.end();
});

//Route to get wives
router.get("/wives", (req, res) => {
  res.write(data.wives.join(", ")) + "\n";
  res.end();
});

//Route to redirect to his pictures
router.get("/picture", (req, res) => {
  res.redirect(data.picture);
  res.end();
});

//Route to public
router.get("/public", (req, res) => {
  res.write("Everybody can see this page");
  res.end();
});

//Route to protected
router.get("/protected", (req, res) => {
    const authenticate = req.headers.authorization;
  
    if (!authenticate) {
      res.status(401);
      res.write("Not authorized\n");
    } else {
      const encoded = authenticate.split(" ")[1];
      const decoded = Buffer.from(encoded, "base64").toString();
  
      const username = decoded.substring(0, decoded.indexOf(":"));
      const password = decoded.substring(decoded.indexOf(":") + 1);
  
      if (username !== "admin" || password !== "admin") {
        res.status(401);
        res.write("Not authorized\n");
      } else {
        res.write("Welcome, authenticated client\n");
      }
    }
    res.end();
  });

//Initializing routes to server
app.use("/", router);

// Server Setup
app.listen(8080, () => {
  console.log("Listening on port 8080");
});
