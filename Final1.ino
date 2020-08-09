int mode=1; //intialized for numeric
int arr[4]={1,2,3,4}; //for password
int R_arr[4]={4,3,2,1};
int ToEmoji=0;  //counter for password counter1
int ToNum=0; //counter for password counter2
int new_Counter=0;
int new_Counter_Emojis=0;
int selftesting=1;
bool Emoji_Mode;
void setup() {
  // put your setup code here, to run once:
    // put your setup code here, to run once:
for(int i=0;i<8;i++){
  pinMode(i,OUTPUT); //For leds
}
  for(int j=10;j<14;j++){
  pinMode(j,INPUT); //For keypad
}
//enable
pinMode(A5,OUTPUT);
pinMode(9,OUTPUT);
//for keypad
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(8,INPUT);

}

void loop() {


if(selftesting==1)
{ digitalWrite(A5,HIGH);
  selftestColumns();
digitalWrite(A5,LOW);
digitalWrite(A5,HIGH);
 selftestrows();
}
 selftesting=0;

     
int keypressed= checkkeypad();
if(mode==1){  //Numeric Mode
 if(keypressed == 0){

    digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
    
     for(int i=0;i<800;i++){
         
      soundPlayer(201);
      
    }
    numbers(0);
 }
 if(keypressed == 1){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);

 for(int i=0;i<800;i++){
         
      soundPlayer(207);
      
    }
    numbers(1);
       
 }
 if(keypressed == 2){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
 
   for(int i=0;i<800;i++){
         
      soundPlayer(213);
      
    }
    numbers(2);
 }
 if(keypressed == 3){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
 
      for(int i=0;i<800;i++){
         
      soundPlayer(251);
      
    }
    numbers(3);
 }

if(keypressed == 4){
  digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
        
       for(int i=0;i<800;i++){
         
      soundPlayer(224);
      
    }
    numbers(4);
        }
 
 if(keypressed == 5){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);

       for(int i=0;i<800;i++){
         
      soundPlayer(87);
      
    }
    numbers(5);
 }
 if(keypressed == 6){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);

        for(int i=0;i<800;i++){
         
      soundPlayer(234);
      
    }
    numbers(6);
 }
  if(keypressed == 7){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
   
      for(int i=0;i<800;i++){
         
      soundPlayer(72);
      
    }
    numbers(7);
 }
  if(keypressed == 8){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
 
      for(int i=0;i<800;i++){
         
      soundPlayer(241);
      
    }
    numbers(8);
 }
  if(keypressed == 9){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
  
       for(int i=0;i<800;i++){
         
      soundPlayer(245);
      
    }
    numbers(9);
}
}


if(ToEmoji==0 && mode==1)
{ 
if(new_Counter==0)
{  
 if(keypressed==arr[0])
  {
    new_Counter=new_Counter+1;
  }
  else
  {
    new_Counter==0;
  }
}

if(new_Counter==1)
{  
 if(keypressed==arr[1])
  {
    new_Counter=new_Counter+1;
  }
  else
  {
    new_Counter==0;
  }
}

if(new_Counter==2)
{  
 if(keypressed==arr[2])
  {
    new_Counter=new_Counter+1;
  }
  else
  {
    new_Counter==0;
  }
}

if(new_Counter==3)
{  
 if(keypressed==arr[3])
  {
    mode=2;
  }
  else
  {
    new_Counter==0;
  }
}
  
}


//Emojis Mode
if(mode==2){ 
  keypressed= checkkeypad();
   if(keypressed == 0){

    digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
     for(int i=0;i<800;i++){
         
      soundPlayer(127);
      
    }
    emojis(0);

   
    
 }
 if(keypressed == 1){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
    for(int i=0;i<800;i++){
         
      soundPlayer(253);
      
    }
  emojis(1);
       
 }
 if(keypressed == 2){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
    for(int i=0;i<800;i++){
         
      soundPlayer(247);
      
    }
  emojis(2);
       
 }
 if(keypressed == 3){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
    for(int i=0;i<800;i++){
         
      soundPlayer(150);
      
    }
  emojis(3);
       
 }

if(keypressed == 4){
  digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
    for(int i=0;i<800;i++){
         
      soundPlayer(252);
      
    }
        emojis(4);
        }
 
 if(keypressed == 5){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
    for(int i=0;i<800;i++){
         
      soundPlayer(166);
      
    }
  emojis(5);
       
 }
 if(keypressed == 6){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
    for(int i=0;i<800;i++){
         
      soundPlayer(173);
      
    }
  emojis(6);
       
 }
  if(keypressed == 7){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
    for(int i=0;i<800;i++){
         
      soundPlayer(181);
      
    }
  emojis(7);
       
 }
  if(keypressed == 8){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
    for(int i=0;i<800;i++){
         
      soundPlayer(188);
      
    }
  emojis(8);
       
 }
  if(keypressed == 9){
   digitalWrite(A5,LOW);
    digitalWrite(A5,HIGH);
    for(int i=0;i<800;i++){
         
      soundPlayer(195);
      
    }
  emojis(9);
       
 }
}
if(ToNum==0 && mode==2)
{ 
  
if(new_Counter_Emojis==0)
{  
 if(keypressed==R_arr[0])
  {
    new_Counter_Emojis=new_Counter_Emojis+1;
  }
  else
  {
   new_Counter_Emojis=0;
  }
}

if(new_Counter_Emojis==1)
{  
 if(keypressed==R_arr[1])
  {
   new_Counter_Emojis=new_Counter_Emojis+1;
  }
  else
  {
   new_Counter_Emojis==0;
  }
}

if(new_Counter_Emojis==2)
{  
 if(keypressed==R_arr[2])
  {
   new_Counter_Emojis=new_Counter_Emojis+1;
  }
  else
  {
   new_Counter_Emojis==0;
  }
}

if(new_Counter_Emojis==3)
{  
 if(keypressed==R_arr[3])
  {
 new_Counter_Emojis=new_Counter_Emojis+1;
  }
  else
  {
   new_Counter_Emojis==0;
  }
}

  if(new_Counter_Emojis==4)
   {
    mode=1;
   }
}
}

int checkkeypad(){  //there's only one row in the keypad connected to vcc
if(digitalRead(A3)== 1){
  return 0;
}
 else if (digitalRead(A2) == 1) {
   return 1;
  }
  else if (digitalRead(A1) == 1) {
   return 2;
  }
  else if (digitalRead(A0) == 1) {
   return 3;
  }
   else if (digitalRead(13) == 1) {
   return 4;
  }
  else if (digitalRead(12) == 1) {
   return 5;
  }
   else if (digitalRead(11) == 1) {
   return 6;
  }
  else if (digitalRead(10) == 1) {
   return 7;
  }
   else if (digitalRead(A4) == 1) {
   return 8;
  }
  else if (digitalRead(8) == 1) {
  return 9;
  }
  return -1;
}

 void lamp(int var){
  digitalWrite(7,0);
     digitalWrite(0,(var&1));
     digitalWrite(1,(var&2));
     digitalWrite(2,(var&4));
     digitalWrite(3,(var&8)); 
     digitalWrite(4,(var&16));
     digitalWrite(5,(var&32));
     digitalWrite(6,(var&64));
  digitalWrite(7,1);
}

void numbers(int num){
   if( num==0){
     lamp(3);
     delay(200);
     lamp(4);
      delay(200);
     lamp(5);
      delay(200);
     lamp(6);
      delay(200);
     lamp(17);
      delay(200);
     lamp(28);
      delay(200);
     lamp(38);
      delay(200);
     lamp(48);
      delay(200);
     lamp(58);
      delay(200);
     lamp(68);
      delay(200);
     lamp(78);
      delay(200);
     lamp(87);
      delay(200);
     lamp(96);
      delay(200);
      lamp(95);
       delay(200);
    
    
     
     lamp(94);
      delay(200);
     lamp(93);
      delay(200);
     lamp(92);
      delay(200);
     lamp(82);
      delay(200);
     lamp(71);
      delay(200);
     lamp(61);
      delay(200);
     lamp(51);
      delay(200);
     lamp(41);
      delay(200);
     lamp(31);
      delay(200);
     lamp(21);
      delay(200);
     lamp(12);
      
    
     
     
   }
   
   
    if( num==1){
     lamp(35);
     delay(200);
     lamp(24);
     delay(200);
     lamp(3);
     delay(200);
     lamp(13);
     delay(200);
     lamp(23);
     delay(200);
     lamp(33);
     delay(200);
     lamp(43);
     delay(200);
     lamp(53);
     delay(200);
     lamp(63);
     delay(200);
     lamp(73);
     delay(200);
     lamp(83);
     delay(200);
     lamp(93);
     
  }
   
   if( num==2){
    lamp(26); 
    delay(200);
     lamp(16); 
     delay(200);
      lamp(5); 
      delay(200);
      lamp(4);
      delay(200);
       lamp(3);
       delay(200);
        lamp(2);
        delay(200);
         lamp(11);
         delay(200);
          lamp(22);
          delay(200);
           lamp(33);
           delay(200);
            lamp(44);
            delay(200);
             lamp(55);
             delay(200);
              lamp(66);
              delay(200);
               lamp(77);
               delay(200);
                lamp(88);
                delay(200);
                 lamp(98);
                 delay(200);
                  lamp(97);
                  delay(200);
                  lamp(96);
                  delay(200);
                  lamp(95);
                  delay(200);
                  lamp(94);
                  delay(200);
                  lamp(93);
                  delay(200);
                  lamp(92);
  
  }
   
   if( num==3){
   lamp(16);
   delay(200);
    lamp(5);
    delay(200);
     lamp(4);
     delay(200);
      lamp(3);
      delay(200);
       lamp(2);
       delay(200);
        lamp(11);
        delay(200);
         lamp(21);
         delay(200);
          lamp(31);
          delay(200);
           lamp(42);
           delay(200);
            lamp(43);
            delay(200);
             lamp(51);
             delay(200);
                lamp(61);
                delay(200);
                 lamp(71);
                 delay(200);
                  lamp(81);
                  delay(200);
                   lamp(86);
                   delay(200);
                    lamp(92);
                    delay(200);
                     lamp(93);
                     delay(200);
                      lamp(94);
                      delay(200);
                       lamp(95);
                       
  
  }
   
   if( num==4){
   lamp(6);
   delay(200);
   lamp(16);
   delay(200);
   lamp(26);
   delay(200);
   lamp(36);
   delay(200);
   lamp(46);
   delay(200);
   lamp(45);
   delay(200);
   lamp(44);
   delay(200);
   lamp(43);
   delay(200);
   lamp(42);
   delay(200);
   lamp(32);
   delay(200);
   lamp(22);
   delay(200);
   lamp(12);
   delay(200);
   lamp(2);
   delay(200);
   lamp(2);
   delay(200);
   lamp(52);
   delay(200);
   lamp(62);
   delay(200);
   lamp(72);
   delay(200);
   lamp(82);
   delay(200);
   lamp(92);
   delay(200);
   
  
  
  }
   
    if( num==5){
  lamp(2);
  delay(200);
   lamp(3);
   delay(200);
    lamp(4);
    delay(200);
     lamp(5);
     delay(200);
      lamp(6);
      delay(200);
       lamp(16);
       delay(200);
        lamp(26);
        delay(200);
         lamp(36);
         delay(200);
          lamp(46);
          delay(200);
           lamp(56);
           delay(200);
            lamp(55);
            delay(200);
             lamp(54);
             delay(200);
              lamp(53);
              delay(200);
               lamp(52);
               delay(200);
                lamp(51);
                delay(200);
                 lamp(61);
                 delay(200);
                  lamp(71);
                  delay(200);
                   lamp(81);
                   delay(200);
                    lamp(91);
                    delay(200);
                     lamp(92);
                     delay(200);
                      lamp(93);
                      delay(200);
                       lamp(94);
                       delay(200);
                        lamp(95);
                        delay(200);
                         lamp(96);
                         
   
  
  
  }

  if( num==6){
  lamp(2);
  delay(200);
  lamp(13);
  delay(200);
  lamp(24);
  delay(200);
  lamp(35);
  delay(200);
  lamp(46);
  delay(200);
  lamp(57);
  delay(200);
  lamp(67);
  delay(200);
  lamp(77);
  delay(200);
  lamp(96);
  delay(200);
  lamp(95);
  delay(200);
  lamp(94);
  delay(200);
  lamp(93);
  delay(200);
  lamp(92);
  delay(200);
  lamp(91);
  delay(200);
  lamp(81);
  delay(200);
  lamp(71);
  delay(200);
  lamp(61);
  delay(200);
  lamp(51);
  delay(200);
  lamp(42);
  delay(200);
  lamp(43);
  delay(200);
  lamp(44);
  delay(200);
  lamp(45);
  delay(200);
  lamp(46);
  
  
   
  
  
  }

  if( num==7){
 
  lamp(7);
  delay(200);
   lamp(6);
   delay(200);
    lamp(5);
    delay(200);
     lamp(4);
     delay(200);
      lamp(3);
      delay(200);
       lamp(2);
       delay(200);
        lamp(1);
        delay(200);
         lamp(11);
         delay(200);
         delay(200);
          lamp(22);
          delay(200);
            lamp(43);
            delay(200);
             lamp(54);
             delay(200);
              lamp(65);
              delay(200);
               lamp(76);
               delay(200);
                lamp(87);
                delay(200);
                 lamp(98);
            
  
  
  }

  if( num==8){
 lamp(2);
 delay(200);
 lamp(3);
 delay(200);
 lamp(4);
 delay(200);
 lamp(5);
 delay(200);
 lamp(6);
 delay(200);
 lamp(17);
 delay(200);
 lamp(27);
 delay(200);
 lamp(37);
 delay(200);
 lamp(47);
 delay(200);
 lamp(56);
 delay(200);
 lamp(55);
 delay(200);
 lamp(54);
 delay(200);
 lamp(53);
 delay(200);
 lamp(52);
 delay(200);
 lamp(41);
 delay(200);
 lamp(31);
 delay(200);
 lamp(21);
 delay(200);
 lamp(11);
 delay(200);
 lamp(67);
 delay(200);
 lamp(77);
 delay(200);
 lamp(87);
 delay(200);
 lamp(96);
 delay(200);
 lamp(95);
 delay(200);
 lamp(94);
 delay(200);
 lamp(93);
delay(200);
 lamp(91);
 delay(200);
  lamp(92);
  delay(200);
 lamp(81);
 delay(200);
 lamp(71);
 delay(200);
 lamp(61);
 delay(200);
 lamp(51);

  
  
  }

 if( num==9){
 lamp(2);
 delay(200);
 lamp(3);
 delay(200);
 lamp(4);
 delay(200);
 lamp(5);
 delay(200);
 lamp(16);
 delay(200);
 lamp(26);
 delay(200);
 lamp(36);
 delay(200);

 lamp(45);
 delay(200);
 lamp(44);
 delay(200);
 lamp(43);
 delay(200);
 lamp(42);
 delay(200);
 lamp(41);
 delay(200);
 lamp(11);
 delay(200);
 lamp(21);
 delay(200);
 lamp(31);
 delay(200);
 lamp(41);
 delay(200);
 lamp(51);
 delay(200);
 lamp(61);
 delay(200);
 lamp(71);
 delay(200);
 lamp(81);
 delay(200);
 lamp(91);
 delay(200);
 lamp(92);
 delay(200);
 lamp(93);
 delay(200);
 lamp(94);
 }

 }



//For emojis
void emojis(int shape){
  if(shape==0){
     lamp(3);
     delay(200);
     lamp(4);
     delay(200);
     lamp(5);
     delay(200);
     lamp(6);
     delay(200);
     lamp(17);
     delay(200);
     lamp(28);
     delay(200);
     lamp(38);
     delay(200);
     lamp(48);
     delay(200);
     lamp(58);
     delay(200);
     lamp(68);
     delay(200);
     lamp(78);
     delay(200);
     lamp(87);
     delay(200);
     lamp(96);
     delay(200);
      lamp(95);
      delay(200);
     lamp(94);
     delay(200);
     lamp(93);
     delay(200);
     lamp(92);
     delay(200);
     lamp(82);
     delay(200);
     lamp(71);
     delay(200);
     lamp(61);
     delay(200);
     lamp(51);
     delay(200);
     lamp(41);
     delay(200);
     lamp(31);
     delay(200);
     lamp(21);
     delay(200);
     lamp(12);
       delay(200);
     lamp(33);
     delay(200);
     
     lamp(36);
     delay(200);
    lamp(66);
    delay(200);
    lamp(75);
    delay(200);
    lamp(74);
    delay(200);
   lamp(63);
   
   
    
    
    }
  if(shape==1){
     lamp(3);
     delay(200);
     lamp(4);
     delay(200);
     lamp(5);
     delay(200);
     lamp(6);
     delay(200);
     lamp(17);
     delay(200);
     lamp(28);
     delay(200);
     lamp(38);
     delay(200);
     lamp(48);
     delay(200);
     lamp(58);
     delay(200);
     lamp(68);
     delay(200);
     lamp(78);
     delay(200);
     lamp(87);
     delay(200);
     lamp(96);
     delay(200);
      lamp(95);
    delay(200);
    
     
     lamp(94);
     delay(200);
     lamp(93);
     delay(200);
     lamp(92);
     delay(200);
     lamp(82);
     delay(200);
     lamp(71);
     delay(200);
     lamp(61);
     delay(200);
     lamp(51);
     delay(200);
     lamp(41);
     delay(200);
     lamp(31);
     delay(200);
     lamp(21);
     delay(200);
     lamp(12);
    delay(200);
//eyes
 lamp(33);
 delay(200);
 lamp(36);
 delay(200);
 lamp(64);
 delay(200);
 lamp(65);
 delay(200);
 lamp(73);
 delay(200);
 lamp(76);

     
  }
  if(shape==2){
    lamp(3);
    delay(200);
     lamp(4);
     delay(200);
     lamp(5);
     delay(200);
     lamp(6);
     delay(200);
     lamp(17);
     delay(200);
     lamp(28);
     delay(200);
     lamp(38);
     delay(200);
     lamp(48);
     delay(200);
     lamp(58);
     delay(200);
     lamp(68);
     delay(200);
     lamp(78);
     delay(200);
     lamp(87);
     delay(200);
     lamp(96);
     delay(200);
      lamp(95);
      delay(200);
    
    
     
     lamp(94);
     delay(200);
     lamp(93);
     delay(200);
     lamp(92);
     delay(200);
     lamp(82);
     delay(200);
     lamp(71);
     delay(200);
     lamp(61);
     delay(200);
     lamp(51);
     delay(200);
     lamp(41);
     delay(200);
     lamp(31);
     delay(200);
     lamp(21);
     delay(200);
     lamp(12);
     delay(200);

//eyes
 lamp(33);
 delay(200);
 lamp(36);
 delay(200);
 //////
 
 lamp(64);
 delay(200);
 lamp(65);
 delay(200);
 lamp(73);
 delay(200);
 lamp(76);
 delay(200);

 
 lamp(84);
 delay(200);
 lamp(85);
 

     

  }
 
  if(shape==3){
    lamp(3);
    delay(200);
     lamp(4);
     delay(200);
     lamp(5);
     delay(200);
     lamp(6);
     delay(200);
     lamp(17);
     delay(200);
     lamp(28);
     delay(200);
     lamp(38);
     delay(200);
     lamp(48);
     delay(200);
     lamp(58);
     delay(200);
     lamp(68);
     delay(200);
     lamp(78);
     delay(200);
     lamp(87);
     delay(200);
     lamp(96);
     delay(200);
      lamp(95);
      delay(200);
    
    
     
     lamp(94);
     delay(200);
     lamp(93);
     delay(200);
     lamp(92);
     delay(200);
     lamp(82);
     delay(200);
     lamp(71);
     delay(200);
     lamp(61);
     delay(200);
     lamp(51);
     delay(200);
     lamp(41);
     delay(200);
     lamp(31);
     delay(200);
     lamp(21);
     delay(200);
     lamp(12);
delay(200);
//eyes
 lamp(33);
 delay(200);
 lamp(36);
 delay(200);
 //////
 

 lamp(73);
 delay(200);
  lamp(74);
  delay(200);
 lamp(75);
 delay(200);
 lamp(76);

 

 
  }
  if(shape==4){
    lamp(3);
    delay(200);
     lamp(4);
     delay(200);
     lamp(5);
     delay(200);
     lamp(6);
     delay(200);
     lamp(17);
     delay(200);
     lamp(28);
     delay(200);
     lamp(38);
     delay(200);
     lamp(48);
     delay(200);
     lamp(58);
     delay(200);
     lamp(68);
     delay(200);
     lamp(78);
     delay(200);
     lamp(87);
     delay(200);
     lamp(96);
     delay(200);
      lamp(95);
      delay(200);
     lamp(94);
     delay(200);
     lamp(93);
     delay(200);
     lamp(92);
     delay(200);
     lamp(82);
     delay(200);
     lamp(71);
     delay(200);
     lamp(61);
     delay(200);
     lamp(51);
     delay(200);
     lamp(41);
     delay(200);
     lamp(31);
     delay(200);
     lamp(21);
     delay(200);
     lamp(12);
     delay(200);

     lamp(33);
     delay(200);
     lamp(36);
delay(200);
     lamp(42);
     delay(200);
     lamp(47);
delay(200);
       lamp(63);
       delay(200);
       lamp(64);
       delay(200);
       lamp(65);
       delay(200);
    lamp(66);
    delay(200);
    lamp(75);
    delay(200);
    lamp(74);
    delay(200);
   lamp(63);
   
  }

if(shape==5){
  lamp(3);
  delay(200);
     lamp(4);
     delay(200);
     lamp(5);
     delay(200);
     lamp(6);
     delay(200);
     lamp(17);
     delay(200);
     lamp(28);
     delay(200);
     lamp(38);
     delay(200);
     lamp(48);
     delay(200);
     lamp(58);
     delay(200);
     lamp(68);
     delay(200);
     lamp(78);
     delay(200);
     lamp(87);
     delay(200);
     lamp(96);
     delay(200);
      lamp(95);
      delay(200);
     lamp(94);
     delay(200);
     lamp(93);
     delay(200);
     lamp(92);
     delay(200);
     lamp(82);
     delay(200);
     lamp(71);
     delay(200);
     lamp(61);
     delay(200);
     lamp(51);
     delay(200);
     lamp(41);
     delay(200);
     lamp(31);
     delay(200);
     lamp(21);
     delay(200);
     lamp(12);
     delay(200);

     lamp(33);
     delay(200);
      lamp(36);
 
}
if(shape==6){
   lamp(3);
   delay(200);
     lamp(4);
     delay(200);
     lamp(5);
     delay(200);
     lamp(6);
     delay(200);
     lamp(17);
     delay(200);
     lamp(28);
     delay(200);
     lamp(38);
     delay(200);
     lamp(48);
     delay(200);
     lamp(58);
     delay(200);
     lamp(68);
     delay(200);
     lamp(78);
     delay(200);
     lamp(87);
     delay(200);
     lamp(96);
     delay(200);
      lamp(95);
      delay(200);
     lamp(94);
     delay(200);
     lamp(93);
     delay(200);
     lamp(92);
     delay(200);
     lamp(82);
     delay(200);
     lamp(71);
     delay(200);
     lamp(61);
     delay(200);
     lamp(51);
     delay(200);
     lamp(41);
     delay(200);
     lamp(31);
     delay(200);
     lamp(21);
     delay(200);
     lamp(12);
      delay(200);
     lamp(33);
     delay(200);
    lamp(36);
    delay(200);
    lamp(44);
    delay(200);
    lamp(45);
    delay(200);
     lamp(63);
     delay(200);
    lamp(66);

}

if(shape==7){
  lamp(3);
  delay(200);
     lamp(4);
     delay(200);
     lamp(5);
     delay(200);
     lamp(6);
     delay(200);
     lamp(17);
     delay(200);
     lamp(28);
     delay(200);
     lamp(38);
     delay(200);
     lamp(48);
     delay(200);
     lamp(58);
     delay(200);
     lamp(68);
     delay(200);
     lamp(78);
     delay(200);
     lamp(87);
     delay(200);
     lamp(96);
     delay(200);
      lamp(95);
      delay(200);
     lamp(94);
     delay(200);
     lamp(93);
     delay(200);
     lamp(92);
     delay(200);
     lamp(82);
     delay(200);
     lamp(71);
     delay(200);
     lamp(61);
     delay(200);
     lamp(51);
     delay(200);
     lamp(41);
     delay(200);
     lamp(31);
     delay(200);
     lamp(21);
     delay(200);
     lamp(12);
delay(200);
     lamp(33);
     delay(200);
    lamp(36);
    delay(200);
 

 lamp(76);
 delay(200);

 lamp(83);
 delay(200);
 lamp(84);
 delay(200);
 lamp(85);
 delay(200);

 lamp(22);
 delay(200);
 lamp(23);
 delay(200);
 lamp(32);
 delay(200);
 lamp(26);
 delay(200);
 lamp(27);
 delay(200);
 lamp(37);
}
if(shape==8){
  lamp(3);
     delay(200);
     lamp(4);
      delay(200);
     lamp(5);
      delay(200);
     lamp(6);
      delay(200);
     lamp(17);
      delay(200);
     lamp(28);
      delay(200);
     lamp(38);
      delay(200);
     lamp(48);
      delay(200);
     lamp(58);
      delay(200);
     lamp(68);
      delay(200);
     lamp(78);
      delay(200);
     lamp(87);
      delay(200);
     lamp(96);
      delay(200);
      lamp(95);
       delay(200);
    
    
     
     lamp(94);
      delay(200);
     lamp(93);
      delay(200);
     lamp(92);
      delay(200);
     lamp(82);
      delay(200);
     lamp(71);
      delay(200);
     lamp(61);
      delay(200);
     lamp(51);
      delay(200);
     lamp(41);
      delay(200);
     lamp(31);
      delay(200);
     lamp(21);
      delay(200);
     lamp(12);
      delay(200);
      //
      lamp(25);
      delay(200);
        lamp(35);
      delay(200);
        lamp(45);
      delay(200);
        lamp(55);
      delay(200);
        lamp(65);
      delay(200);
        lamp(85);
     
  }

if(shape==9){
  lamp(43);
  delay(200);
  lamp(44);
  delay(200);
  lamp(45);
  delay(200);
  lamp(46);
  delay(200);
  lamp(47);
  delay(200);
  lamp(35);
  delay(200);
  lamp(55);
  delay(200);
  lamp(25);
  delay(200);
  lamp(65);
  delay(200);
  lamp(15);
  delay(200);
  lamp(75);
}
  
}

void selftestColumns(){
  //digitalWrite(A5,HIGH);
lamp(0);
lamp(10);
lamp(20);
lamp(30);
lamp(40);
lamp(50);
lamp(60);
lamp(70);
lamp(80);
lamp(90);
delay(200);
digitalWrite(A5,LOW);
digitalWrite(A5,HIGH);
lamp(1);
lamp(11);
lamp(21);
lamp(31);
lamp(41);
lamp(51);
lamp(61);
lamp(71);
lamp(81);
lamp(91);
delay(200);
digitalWrite(A5,LOW);
digitalWrite(A5,HIGH);

lamp(2);
lamp(12);
lamp(22);
lamp(32);
lamp(42);
lamp(52);
lamp(62);
lamp(72);
lamp(82);
lamp(92);
delay(200);
digitalWrite(A5,LOW);
digitalWrite(A5,HIGH);

lamp(3);
lamp(13);
lamp(23);
lamp(33);
lamp(43);
lamp(53);
lamp(63);
lamp(73);
lamp(83);
lamp(93);
delay(200);
digitalWrite(A5,LOW);
digitalWrite(A5,HIGH);

lamp(4);
lamp(14);
lamp(24);
lamp(34);
lamp(44);
lamp(54);
lamp(64);
lamp(74);
lamp(84);
lamp(94);
delay(200);
digitalWrite(A5,LOW);
digitalWrite(A5,HIGH);
lamp(5);
lamp(15);
lamp(25);
lamp(35);
lamp(45);
lamp(55);
lamp(65);
lamp(75);
lamp(85);
lamp(95);
delay(200);
digitalWrite(A5,LOW);
digitalWrite(A5,HIGH);
lamp(6);
lamp(16);
lamp(26);
lamp(36);
lamp(46);
lamp(56);
lamp(66);
lamp(76);
lamp(86);
lamp(96);
delay(200);
digitalWrite(A5,LOW);
digitalWrite(A5,HIGH);
lamp(7);
lamp(17);
lamp(27);
lamp(37);
lamp(47);
lamp(57);
lamp(67);
lamp(77);
lamp(87);
lamp(97);
delay(200);
digitalWrite(A5,LOW);
digitalWrite(A5,HIGH);
lamp(8);
lamp(18);
lamp(28);
lamp(38);
lamp(48);
lamp(58);
lamp(68);
lamp(78);
lamp(88);
lamp(98);
delay(200);
digitalWrite(A5,LOW);
digitalWrite(A5,HIGH);
lamp(9);
lamp(19);
lamp(29);
lamp(39);
lamp(49);
lamp(59);
lamp(69);
lamp(79);
lamp(89);
lamp(99);
delay(200);
//digitalWrite(A5,LOW);
}

void selftestrows(){
  digitalWrite(A5,HIGH);
  for(int i=0;i<10;i++){
    lamp(i);
    
  }
  delay(200);
  digitalWrite(A5,LOW);
  digitalWrite(A5,HIGH);
   for(int i=10;i<20;i++){
    lamp(i);
    
  }
  delay(200);
 digitalWrite(A5,LOW);
  digitalWrite(A5,HIGH);
 for(int i=20;i<30;i++){
    lamp(i);
 
  }
  delay(200);
 digitalWrite(A5,LOW);
  digitalWrite(A5,HIGH);
 for(int i=30;i<40;i++){
    lamp(i);
  
  }
  delay(200);
 digitalWrite(A5,LOW);
  digitalWrite(A5,HIGH);
 for(int i=40;i<50;i++){
    lamp(i);
   
  }
  delay(200);
   digitalWrite(A5,LOW);
  digitalWrite(A5,HIGH);
 for(int i=50;i<60;i++){
    lamp(i);
    
  }
  delay(200);
   digitalWrite(A5,LOW);
  digitalWrite(A5,HIGH);
 for(int i=60;i<70;i++){
    lamp(i);
   
  }
  delay(200);
   digitalWrite(A5,LOW);
  digitalWrite(A5,HIGH);
 for(int i=70;i<80;i++){
    lamp(i);
   
  }
  delay(200);
  digitalWrite(A5,LOW);
  digitalWrite(A5,HIGH);
 for(int i=80;i<90;i++){
    lamp(i);
   
  }
   delay(200);
   digitalWrite(A5,LOW);
   digitalWrite(A5,HIGH);
 for(int i=90;i<100;i++){
    lamp(i);
   
  } 
  delay(200);
   digitalWrite(A5,LOW);
  }

void soundPlayer(int sound){
  digitalWrite(9,HIGH);
  delayMicroseconds(sound);
  digitalWrite(9,LOW);
}
