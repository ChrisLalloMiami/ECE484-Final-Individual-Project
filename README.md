# ECE484 Final Individual Project Proposal

## Audio and On-Field Systems - Chris Lallo

### Introduction

My group and I will be implementing a version of pinball using a cardboard frame. Specifically, the theme of our game will be based on the Celtic Football Club. This game will involve many several different embedded systems, but I will be developing the audio features and the on-field systems.

### Audio

Throughout the game, several different sounds will be outputted to the user. For example, when the player initially launches the ball, they will hear the crowd roaring. As the game goes on, crowd cheers will be heard. I will accomplish this by reading audio files from a prepared micro-SD card attached to an Arduino with a micro-SD adaptor. Audio will be outputted through speakers located in the corners of the play field.

### On-Field Systems

In addition to audio, I will be responsible for the design of on-field systems, including their functionality as well as their communication with the overarching game system. The play field will be populated with several pop-up players. As goals are scored, more and more defenders will be raised onto the playing field using servo motors. A pop-up referee will also be introduced onto the play field at a certain number of goals. Hitting the referee with a ball will result in the reversal of the player's flipper controls. This will be accomplished using two thinly separated pieces of copper tape. When struck with a metal ball, a path of conductivity will be created, allowing a signal to be sent to the main system.
