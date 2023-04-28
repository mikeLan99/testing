import React from "react";

const arr = ["kabee", "suraj", "arsh"];

const Movie = () => {
  return (
    <>
      {arr.map((curr, i) => (
        <div>Hello {curr}</div>
      ))}
    </>
  );
};
export default Movie;
