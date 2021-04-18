# mario-pyramid
 Allow the user to decide just how tall the pyramids should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

![mario-pyramid](https://cs50.harvard.edu/x/2021/psets/1/mario/more/pyramids.png)

Here’s how the program might work if the user inputs `8` when prompted:
```
$ ./mario
Height of pyramid: 8
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########
```

Here’s how the program might work if the user inputs `4` when prompted:
```
$ ./mario
Height of pyramid: 4
   #  #
  ##  ##
 ###  ###
####  ####
```

And here’s how the program might work if the user inputs `1` when prompted:
```
$ ./mario
Height: 1
#  #
```


If the user doesn’t, in fact, input a positive integer between `1` and `8`, inclusive, when prompted, the program should re-prompt the user until they cooperate:
```
$ ./mario
Height of pyramid: -1
Height of pyramid: 0
Height of pyramid: 42
Height of pyramid: 50
Height of pyramid: 4
   #  #
  ##  ##
 ###  ###
####  ####
```
