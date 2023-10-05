# Name: Ahmed Abdul Monem Ahmed Radwan
## Assignments:
1- You are required to build a software that display a number on a seven-segment display after 
pressing a button on a keypad.<br /> The implemented GPIO driver shall be used to interface the 
Keypad and the seven-segment display.<br />
- The expected output is as follow:<br />
o Keypad.h that contains the declarations for the keypad manager APIs.<br />
o Keypad.c that contains the implementations for the keypad driver APIs.<br />
o Main.c that contains the implementation of the required application.<br />
- The following requirements shall be followed during implementation.<br />
o The implemented GPIO driver shall be used by the Keypad driver APIs.<br />
o Keypdad_init<br />
▪ Function shall not take any arguments. It will be used to initialize the internal 
keypad driver variable(s).<br /><br />
o Keypad_manage<br />
▪ Function shall not take any arguments.<br />
▪ Function shall be called periodically from the infinite loop in main function.<br />
▪ Function shall scan all keys to check which one is pressed.<br />
▪ Once a valid key press detected, function shall do the following:<br />
• Store the pressed key value.<br />
• Call a function “KeypadCallouts_KeyPressNotificaton” and shall not pass 
any arguments to it.<br />
▪ Only a transition from no key pressed to one key press shall be considered as a 
valid press.<br />
▪ After the key press, the value of the stored key shall not be changed until the 
key is released.<br />
▪ The value of the stored key shall not be changed until key is released and 
Keypad_GetKey function is called.<br />
▪ Function shall use lookup table implementation to define the value of the 
pressed key.<br />
o Keypad_GetKey<br />
▪ Function shall be called by application to get the last stored key.<br />


### OUTPUT GIF:

![OpenBoard Cast 1](https://user-images.githubusercontent.com/70094970/235738487-a811fb97-845f-4bcc-827a-4a651671a241.gif)

## LINK OF VIDEO :
### https://drive.google.com/file/d/1672qnVqiiCmY0TblUWKiSYbpYhPsM0AB/view?usp=sharing
