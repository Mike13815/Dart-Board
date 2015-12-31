# Dart-Board

This is my first readme ever, so bear with me.

This repository will contain the files related to the STEM Club dart board project.

The project exists in six parts:

  1. The decode hardware that interfaces directly with the dart board.
    Although the dart board is a simple membrane matrix, because a dart strike lasts nearly 1/200th of the time of a matrix keyboard's shortest 
    key time, we couldn't use existing decode hardware made for keyboards. This lead to making our own using a pair of ATmega328's.
  2. The coin acceptor and associated microcontroller.
  3. The games, loaded into their own isolated microcontroller.
  4. The power supply, associated protective circuitry, and diagnostic microcontroller.
    The diagnostic microcontroller also handles power-on-self-test for the other hardware, and error code display.
  5. The user-side display which handles attraction before, and aesthetic feedback during, gameplay.
  
  
Because the project is owned by the STEM club, all software and designs are open source and free to distribute, change, use, and make fun of.
