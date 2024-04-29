/* DO NOT MODIFY THIS FILE */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "labFile.hpp"


TEST_CASE("test1", "Vehicles report correct types and wheel counts") {
    Car car("Toyota");
    Motorcycle motorcycle("Harley-Davidson");

    SECTION("Car checks") {
        REQUIRE(car.getWheels() == 4);
        REQUIRE(car.getType() == "Car");
        REQUIRE(car.getBrand() == "Toyota");
    }

    SECTION("Motorcycle checks") {
        REQUIRE(motorcycle.getWheels() == 2);
        REQUIRE(motorcycle.getType() == "Motorcycle");
        REQUIRE(motorcycle.getBrand() == "Harley-Davidson");
    }
}

TEST_CASE("test2", "Buildings calculate maintenance costs correctly") {
    Office office("123 Business St", 1000, 50);
    Residence residence("456 Residential Dr", 500, 3);

    SECTION("Office maintenance cost") {
        REQUIRE(office.maintenanceCost() == 1000 * 5.0 + 50 * 10.0);
    }

    SECTION("Residence maintenance cost") {
        REQUIRE(residence.maintenanceCost() == 500 * 7.5 + 3 * 50.0);
    }
}

TEST_CASE("test3", "Animals speak and categorize correctly") {
    Dog dog;
    Cat cat;
    Bird bird;

    SECTION("Dog") {
        REQUIRE(dog.speak() == "Bark");
        REQUIRE(dog.category() == "Mammal");
    }

    SECTION("Cat") {
        REQUIRE(cat.speak() == "Meow");
        REQUIRE(cat.category() == "Mammal");
    }

    SECTION("Bird") {
        REQUIRE(bird.speak() == "Tweet");
        REQUIRE(bird.category() == "Avian");
    }
}
