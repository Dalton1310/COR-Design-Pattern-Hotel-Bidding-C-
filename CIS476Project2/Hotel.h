#pragma once
#include <string>

class HotelRoom {
private:
    int suiteRooms;
    int deluxeRooms;
    int standardRooms;

public:
    HotelRoom() {
        suiteRooms = 10;
        deluxeRooms = 15;
        standardRooms = 45;
    }

    void decSuite() {
        suiteRooms--;
    }

    void decDeluxe() {
        deluxeRooms--;
    }

    void decStandard() {
        standardRooms--;
    }

    int getSuite() {
        return suiteRooms;
    }

    int getDeluxe() {
        return deluxeRooms;
    }

    int getStandard() {
        return standardRooms;
    }
};

class Standard{
private:
    float lowerBound;
public:
    Standard() {
        lowerBound = 80;
    }

    void checkRoom(HotelRoom* hotel, float bid, std::string& roomName) {
        if (bid >= lowerBound && hotel->getStandard() > 0) {
            roomName = "Standard";
            hotel->decStandard();
        }
        else {
            roomName = "";
        }
    }
};

class Deluxe{
private:
    float lowerBound;
    Standard standard;
public:
    Deluxe() {
        lowerBound = 150;
        standard = Standard();
    }

    void checkRoom(HotelRoom* hotel, float bid, std::string& roomName) {
        if (bid >= lowerBound && hotel->getDeluxe() > 0) {
            roomName = "Deluxe";
            hotel->decDeluxe();
        }
        else {
            standard.checkRoom(hotel, bid, roomName);
        }
    }
};

class Suite{
private:
    float lowerBound;
    Deluxe deluxe;
public:
    Suite() {
        lowerBound = 280;
        deluxe = Deluxe();
    }

    void checkRoom(HotelRoom* hotel, float bid, std::string& roomName) {
        if (bid >= lowerBound && hotel->getSuite() > 0) {
            roomName = "Suite";
            hotel->decSuite();
        }
        else
            deluxe.checkRoom(hotel, bid, roomName);
    }
};