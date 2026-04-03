# The-Big-Object
*Minimizing binary file sizes is for cowards, what if we tried maximizing binary sizes?*

Some dumb project where I try to shove as much as I can into a single source file with the intention of inflating the size of the compiled binaries, specifically the `.a` static library.

## Rules
* Preferably only original work should be in here
* No needlessly large string literals or static arrays, keep those to a minimum. All bloat should contribute something to the overall TheBigObject ecosystem instead of just "haha look at that 3 billion member array" 
* Unless the code quality gets legitimately unbareable, don't bother trying to optimize anything (we're doing the exact opposite idea)
* All code has to be compatible with GCC
* Keep it monolithic, feed everything into TheBigObject.c
