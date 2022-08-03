function my_spaceship(flight_path) {
  //Declaring default variables  
  let x = 0;
  let y = 0;
  let direction = "up";

  //Looping through each character on the flight path to get the coordinate
  for (const character of flight_path) {
    if (character.toLowerCase() === "a" && direction === "up") {
      y--;
    }
    if (character.toLowerCase() === "a" && direction === "down") {
      y++;
    }
    if (character.toLowerCase() === "a" && direction === "left") {
      x--;
    }
    if (character.toLowerCase() === "a" && direction === "right") {
      x++;
    }
    if (character.toLowerCase() === "r" && direction === "up") {
      direction = "right";
      continue;
    }
    if (character.toLowerCase() === "r" && direction === "right") {
      direction = "down";
      continue;
    }
    if (character.toLowerCase() === "r" && direction === "down") {
      direction = "left";
      continue;
    }
    if (character.toLowerCase() === "r" && direction === "left") {
      direction = "up";
      continue;
    }
    if (character.toLowerCase() === "l" && direction === "up") {
      direction = "left";
      continue;
    }
    if (character.toLowerCase() === "l" && direction === "right") {
      direction = "up";
      continue;
    }
    if (character.toLowerCase() === "l" && direction === "down") {
      direction = "right";
      continue;
    }
    if (character.toLowerCase() === "l" && direction === "left") {
      direction = "down";
      continue;
    }
  }

  //returning the resultant values
  return `{x: ${x}, y: ${y}, direction: '${direction}'}`;
}