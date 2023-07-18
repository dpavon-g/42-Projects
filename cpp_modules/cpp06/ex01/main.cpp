#include "serialize.hpp"

int main() {
    Data data;
    data.value = 42;
    data.character = 'A';

    serialize mySerial;
    void* serializedData = mySerial.serial(&data);
    Data* deserializedData = mySerial.deserial(serializedData);

    std::cout << "Value: " << deserializedData->value << std::endl;
    std::cout << "Character: " << deserializedData->character << std::endl;
    (void)deserializedData;
}