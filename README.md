# Turret Mode
## About
"Turret Mode" is a mod for the unofficial PC Port of Star Fox 64, "Starship." It restores an unfinished gamemode where the player controlled the Great Fox's guns in first-person view. While originally only meant for Area 6, this mod expands the gamemode to encompass every level, and adds new features. For more background info, see this [video.](https://www.youtube.com/watch?v=cmZl8i-uAng)

## Issues
If you have trouble installing, visit https://github.com/HarbourMasters/Starship for more complete instructions and how to install regular Starship. If you encounter any bugs while playing, please report them in the dedicated Starship forum topic "Turret Mode" in the Ship of Harkinian's Discord: https://discord.com/invite/shipofharkinian

# Instructions
Currently Windows only. You will need to provide your own copy of the original "USA 1.1 Rev A" ROM.
* Download the release version of Turret Mode [here.](https://github.com/El4rix/Starship/releases/tag/v1.2)
* Download a nightly build of Starship [here.](https://nightly.link/HarbourMasters/Starship/workflows/main/main/starship-windows.zip) The December 2024 release (v1.0.0) will not work, but newer ones will.
* Move "Turret.exe" and your ROM into your Starship folder.
* Run "Turret.exe" and select your ROM to generate the .o2r file. (Generating the .o2r with "Starship.exe" also works, if you've already done that).
* Play!

# Features
### Rapid Fire
Hold A to rapidly fire the Great Fox's lasers. There is no lock-on attack. Collecting Laser items will increase your fire rate. Lasers are reset after each level. Laser items also restore some health.

### Charge Attack
Hold R to charge your bomb. Lines will point to nearby entities. Press B when the spark appears and the sound cue plays to detonate. Your Bombs will slowly refill if you have less than 4.

### Tractor Beam
Holding R also uses the Tractor Beam. Vacuum enemies, teammates, and items towards you so you don't have to move, you lazy bastard. Targeting teammates will slowly heal them if they're close to you.

### Locking the View
Hold Z to lock your view in the direction you're facing. If you're on-rails, you'll also brake.

### On-Rails/Corridor Mode
Use the C buttons or D-Pad to move around. Press B to recenter your view, hold B to reposition the Great Fox. Hold Z to brake. There is no way to boost.

### 360/All-Range Mode 
The Great Fox orbits the center of the map. Press C/D-Pad Up to decrease your orbit radius, and C/D-Pad Down to increase your orbit radius. Press C/D-Pad Left and Right to quickly turn your view. Press B to reorient your view to the center of the map.

### Iron Wings
The Great Fox's wings are impossible to break, and you won't lose your laser power ups or struggle to ascend, but I still wouldn't fly carelessly in a populated city.

### Expert Mode
Enemy accuracy and damage are not increased in Expert Mode - only their numbers. More cannon fodder!

### Nasty Surprises
Certain enemies' behaviors have been changed to provide more of a challenge. Bosses also have more health.

### New Helper
ROB's on the ship with you, so maybe a friend in the Cornerian Army can lend you a helping hand.

### New Cutscenes
I had to accomodate the Great Fox's big ol' ass somehow.

### Hotswap
Instantly switch between the Great Fox and the Arwing with a button combination (Z + R + C-Down).

# Controls
| Button | Action | (360) |
| - | - | - |
| A | Lasers |
| B | Recenter |
| C/D-Pad Left/Right | Move Left/Right | Quick Turn | 
| C/D-Pad Up/Down | Move Up/Down | Move Inwards/Outwards |
| R | Charge Bomb & Tractor Beam |
| Z | Brake & Lock View |
| Z + R + C-Down| Swap vehicle |

# Development
If you want to manually compile or edit Turret Mode, please consult the [building instructions](https://github.com/HarbourMasters/Starship/blob/main/docs/BUILDING.md).

# Special Thanks:
* [The Starship Team](https://github.com/HarbourMasters/Starship) : for making this awesome port.
* [Sonic Dreamcaster](https://github.com/sonicdcer) : for showing me how to set everything up.
* [petrie911](https://github.com/petrie911) : for decompiling and documenting the original turret mode left in the game.