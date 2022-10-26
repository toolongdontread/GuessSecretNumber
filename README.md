# GuessSecretNumber

There are 5(default) chances for you to guess the secret number.

# Play the game

Run the ```main.cpp``` file.

Then input the number in the command. For example,

```
1 
```

If the answer is correct, it will show ```correct``` under the input:

```
1
correct
```

Else it will show:

```
1
false
```

# Customization

You can adjust number of chances to guess the number by editing the integer ```i``` inside the for loop under the ```startGame()``` function.

```
void startGame(){
  for(int i=0;i<x(defined by you);i++){...}
}
```

You can change the scope of the random number by editing the ```secretNum``` under the ```genNum()``` function.

```
void genNum(){
  secretNum = rand() % x(defined by you) + 1;
}
```
