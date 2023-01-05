# Push_Swap-42sp

Sorting algoirthm with a twist!

![Visualisation of sorting algorithm using two stacks and custom stack operations.](https://user-images.githubusercontent.com/49699403/210781256-cb4d85f9-3166-4279-89e5-5e816541168d.gif)

In this projects students are tasked with sorting a list of unordered numbers. To do so, students must make use of exactly two stacks, and manipulate the numbers between the two stacks using a set of 11 preset stack operations, that is:

| Operation | Code | Definition |
| --- | --- | --- |
| **Push** | `pa`, `pb` | The topmost number in one stack is pushed to the top of the other stack. |
| **Swap** | `sa`, `sb`, `ss` | The two topmost numbers in a given stack swap places. `ss` swaps elements in both stacks individually at the same time. |
| **Rotate** | `ra`, `rb`, `rr` | All elements in a given stack are shifted one position up, so that the first element becomes the last one, the second becomes the first, and so on. `rr` rotates both stacks at the same time. |
| **Reverse-rotate** | `rra`, `rrb`, `rrr` | All elements in a given stack are shifted one position below, so that the last element becomes the first one, the second but last one becomes the last one, and so on. `rrr` reverse-rotates both stacks at the same time. |


## Running this code
First off clone this repo. Then compile the program using `make`, and finally pass in a space-separated unordered list of numbers to the program `push_swap`. It will output all the stack operations that it was able to apply sequentially in order to have your list sorted in ascending order.
```
git clone
cd
make
./bin/push_swap 42 -42 
```
Obs.: Numbers can range from -2147483648 to 2147483647. Duplicates are not allowed! Try it on and see what happens :)


## Visualising the algorithm at work
The program itself only outputs a list of operations in the terminal. Boring!
So one of the 42 students created this very handy algorithm visualizer (which produced that beautiful gif at the top). Since it's a python3 package, there's no need to git clone it. All you need to do is (firstly have python3 installed in your pc!) to run `pip3 install push_swap_gui` and you should be good to go. To have it run, go with `python3 -m push_swap_gui`. From that point on you should be able to find your way through the graphic interface!

> For documentation/more information on the visualiser, [check it out on Github!](https://github.com/elijahkash/push_swap_gui)


## Final note
If you're a 42 student struggling to understand this project, I got your back! Please refer to this Notion page that I wrote covering the general concepts related to this project! It's in Portuguese :cactus:

> [Acelera — Push_swap](https://rodsmade.notion.site/Acelera-Push_swap-083ab844f9b44456a176e4e4c875bc73)
