int intNumber = 76;
byte byteNumber = 128;
boolean booleanVariable = 16;

void setup() {
    Serial.begin(9600);

    //Степень числа 2^7
    byte draft = bit(7);
    printByte(draft);

    //Инвертировать биты наоборот
    draft = ~draft;
    printByte(draft);

    //Вывод чисел в двоичном виде    
    Serial.println(intNumber, BIN);
    Serial.println(byteNumber, BIN);
    Serial.println(booleanVariable, BIN);
    
    //Включает 6-ой бит
    bitSet(byteNumber, 6);
    Serial.println(byteNumber, BIN);

    //Выключает второй бит во второй позиции
    bitWrite(byteNumber, 2, 0);  
    Serial.println(byteNumber, BIN);

    //Выключает 2-ой бит у byte'а
    bitClear(byteNumber, 2);  
    Serial.println(byteNumber, BIN);

    //Выключает 3-ой бит у byte'а
    bitWrite(byteNumber, 3, 0);  
    Serial.println(byteNumber, BIN);

    //Включает 6-ой бит у bool переменной
    bitSet(booleanVariable, 6);
    Serial.println(booleanVariable, BIN);
    
    //Выключает 2-ой бит у bool переменной
    bitClear(booleanVariable, 2);  
    Serial.println(booleanVariable, BIN);

    //Выключает 3-ой бит у bool переменной
    bitWrite(booleanVariable, 3, 0);  
    Serial.println(booleanVariable, BIN);

    //Присваевает переменной num значений 2^3
    byte num = _BV(3);
    Serial.println(num, BIN);

    //Смещает биты у переменной на три позиции вправо
    intNumber >>= 3;
    Serial.println(intNumber, BIN);

    //Смещает биты у переменной на шесть позиций вправо
    byteNumber >>= 6;
    Serial.println(byteNumber, BIN);

    //Смещает биты у переменной на одну позцию влево
    booleanVariable <<= 1;
    Serial.println(booleanVariable, BIN);
}

void printByte(byte value) {
    Serial.println(value);
}

void loop() {}


