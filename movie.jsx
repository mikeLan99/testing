import React, { useEffect } from "react";

// made some changes to the arr with new names added
const arr = ["kabee", "suraj", "arsh", "sinha ", "mikelan"];

const Movie = () => {
  useEffect(() => {
    console.log("Hello World");
  }, []);

  return (
    <>
      {arr.map((curr, i) => (
        <div>Hello {curr}</div>
      ))}
    </>
  );
};
export default Movie;
