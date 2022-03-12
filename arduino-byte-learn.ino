int intNumber = 76;
byte byteNumber = 128;
boolean booleanVariable = 16;

void setup() {
    Serial.begin(9600);

    byte draft = bit(7);
    printByte(draft);

    draft = ~draft;
    printByte(draft);

    Serial.begin(9600);
    Serial.print("");
    
    Serial.println(intNumber, BIN);
    Serial.println(byteNumber, BIN);
    Serial.println(booleanVariable, BIN);
    
    bitSet(intNumber, 6);
    Serial.println(intNumber, BIN);
    
    bitClear(intNumber, 2);  
    Serial.println(intNumber, BIN);

    bitWrite(intNumber, 2, 0);  
    Serial.println(intNumber, BIN);

    bitSet(byteNumber, 6);
    Serial.println(byteNumber, BIN);
    
    bitClear(byteNumber, 2);  
    Serial.println(byteNumber, BIN);

    bitWrite(byteNumber, 2, 0);  
    Serial.println(byteNumber, BIN);

    bitSet(booleanVariable, 6);
    Serial.println(booleanVariable, BIN);
    
    bitClear(booleanVariable, 2);  
    Serial.println(booleanVariable, BIN);

    bitWrite(booleanVariable, 3, 0);  
    Serial.println(booleanVariable, BIN);

    byte num = bit(3);
    Serial.println(num, BIN);

    intNumber >>= 3;
    Serial.println(intNumber, BIN);

    byteNumber >>= 6;
    Serial.println(byteNumber, BIN);

    booleanVariable <<= 1;
    Serial.println(booleanVariable, BIN);
}

void printByte(byte value) {
    Serial.println(value);
}

void loop() {}


