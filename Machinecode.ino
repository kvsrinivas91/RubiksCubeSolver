/*
  white1=a
  white2=b
  yellow1=c
  yellow2=d
  red1=e
  red2=f
  orange1=g
  orange2=h
  green1=i
  green2=j
  blue1=k
  blue2=l
*/

String s1 = "lzzhzziafzzlzzaiaaeafaeaafaadfghjk/nkalakaalagdicgdicgdicgdicgdicdldkcdfdecfdecfdecdhdgccdgcicgdhcckdldhcgdlckcedfgckdlhccicgciccgcckdgcldicedhcfdgcclbkalbkaclbkalbkalbkalbkac";     
//String s1="abcdefghijkl";
// defines pins numbers
int len=s1.length();
const int stepPin1 = 3; 
const int dirPin1 = 4; 
const int stepPin2 = 5; 
const int dirPin2 = 6; 
const int stepPin3 = 7; 
const int dirPin3 = 8; 
const int stepPin4 = 9; 
const int dirPin4 = 10; 
const int stepPin5 = 11; 
const int dirPin5 = 12; 
const int stepPin6 = 13; 
const int dirPin6 = A0; 
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin1,OUTPUT); 
  pinMode(dirPin1,OUTPUT);
   pinMode(stepPin2,OUTPUT); 
  pinMode(dirPin2,OUTPUT);
   pinMode(stepPin3,OUTPUT); 
  pinMode(dirPin3,OUTPUT);
   pinMode(stepPin4,OUTPUT); 
  pinMode(dirPin4,OUTPUT);
   pinMode(stepPin5,OUTPUT);
  pinMode(dirPin5,OUTPUT);
   pinMode(stepPin6,OUTPUT); 
  pinMode(dirPin6,OUTPUT);  


  for(int i=0;i<len;i++)
    {

        if(s1[i]=='a')
        {
                      digitalWrite(dirPin1,HIGH); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin1,HIGH); 
                delayMicroseconds(3000); 
                digitalWrite(stepPin1,LOW); 
                delayMicroseconds(3000); 
              }
               delay(1000); // One second delay
        }

        else
        if(s1[i]=='b')
        {
                      digitalWrite(dirPin1,LOW); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin1,HIGH); 
                delayMicroseconds(3000); 
                digitalWrite(stepPin1,LOW); 
                delayMicroseconds(3000); 
              }
               delay(1000); // One second delay
        }

        else
        if(s1[i]=='c')
        {
                      digitalWrite(dirPin2,HIGH); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin2,HIGH); 
                delayMicroseconds(2000); 
                digitalWrite(stepPin2,LOW); 
                delayMicroseconds(2000); 
              }
               delay(1000); // One second delay
        }

        else
        if(s1[i]=='d')
        {
                      digitalWrite(dirPin2,LOW); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin2,HIGH); 
                delayMicroseconds(2000); 
                digitalWrite(stepPin2,LOW); 
                delayMicroseconds(2000); 
              }
               delay(1000); // One second delay
        }

         else
        if(s1[i]=='e')
        {
                      digitalWrite(dirPin3,HIGH); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin3,HIGH); 
                delayMicroseconds(2000); 
                digitalWrite(stepPin3,LOW); 
                delayMicroseconds(2000); 
              }
               delay(1000); // One second delay
        }

        else
        if(s1[i]=='f')
        {
                      digitalWrite(dirPin3,LOW); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin3,HIGH); 
                delayMicroseconds(2000); 
                digitalWrite(stepPin3,LOW); 
                delayMicroseconds(2000); 
              }
               delay(1000); // One second delay
        }

         else
        if(s1[i]=='g')
        {
                      digitalWrite(dirPin4,HIGH); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin4,HIGH); 
                delayMicroseconds(2000); 
                digitalWrite(stepPin4,LOW); 
                delayMicroseconds(2000); 
              }
               delay(1000); // One second delay
        }

         else
        if(s1[i]=='h')
        {
                      digitalWrite(dirPin4,LOW); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin4,HIGH); 
                delayMicroseconds(2000); 
                digitalWrite(stepPin4,LOW); 
                delayMicroseconds(2000); 
              }
               delay(1000); // One second delay
        }

        else
        if(s1[i]=='i')
        {
                      digitalWrite(dirPin5,HIGH); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin5,HIGH); 
                delayMicroseconds(2000); 
                digitalWrite(stepPin5,LOW); 
                delayMicroseconds(2000); 
              }
               delay(1000); // One second delay
        }

        else
        if(s1[i]=='j')
        {
                      digitalWrite(dirPin5,LOW); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin5,HIGH); 
                delayMicroseconds(2000); 
                digitalWrite(stepPin5,LOW); 
                delayMicroseconds(2000); 
              }
               delay(1000); // One second delay
        }

        else
        if(s1[i]=='k')
        {
                      digitalWrite(dirPin6,HIGH); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin6,HIGH); 
                delayMicroseconds(2000); 
                digitalWrite(stepPin6,LOW); 
                delayMicroseconds(2000); 
              }
               delay(1000); // One second delay
        }

        else
        if(s1[i]=='l')
        {
                      digitalWrite(dirPin6,LOW); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin6,HIGH); 
                delayMicroseconds(2000); 
                digitalWrite(stepPin6,LOW); 
                delayMicroseconds(2000); 
              }
               delay(1000); // One second delay
        }

    
    }
 

  
}
void loop() {/*
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 800; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000); // One second delay
  
  digitalWrite(dirPin,LOW); //Changes the rotations direction
  // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < 400; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
  }
  delay(1000);*/
  /*
        digitalWrite(dirPin2,HIGH); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 200; x++) 
              {
                digitalWrite(stepPin2,HIGH); 
                delayMicroseconds(1000); 
                digitalWrite(stepPin2,LOW); 
                delayMicroseconds(1000); 
              }
               delay(1000); // One second delay
        

       
        
                      digitalWrite(dirPin2,LOW); // Enables the motor to move in a particular direction
              // Makes 200 pulses for making one full cycle rotation
              for(int x = 0; x < 50; x++) 
              {
                digitalWrite(stepPin2,HIGH); 
                delayMicroseconds(1000); 
                digitalWrite(stepPin2,LOW); 
                delayMicroseconds(1000); 
              }
               delay(1000); // One second delay*/
}//2,
