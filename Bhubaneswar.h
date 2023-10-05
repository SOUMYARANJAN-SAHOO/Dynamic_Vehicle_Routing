

struct Graph *initializer()
{
    //* Initialize the graph with the initial values from the Bhubaneswar Map
    struct Graph *Bhubaneswar = createGraph(41);

    // //* Initialize the places with the numeric values from the map
    // Place place0(0, "Acharya Vihar");
    // Place place1(1, "AG Square");
    // Place place2(2, "AIIMS");
    // Place place3(3, "AMRI Hospital");
    // Place place4(4, "Apollo Hospital");
    // Place place5(5, "Baramunda");
    // Place place6(6, "Biju Pattnaik Airport");
    // Place place7(7, "C.V. Raman Global University");
    // Place place8(8, "CARE Hospital");
    // Place place9(9, "Collage of Engineering & Technology");
    // Place place10(10, "Centurion University of Technology and Management");
    // Place place11(11, "Fire Station");
    // Place place12(12, "Gandhi Institute of Technological Advancement ");
    // Place place13(13, "Gohiria Square");
    // Place place14(14, "Hi-Tech");
    // Place place15(15, "International Institute of Information Technology");
    // Place place16(16, "Indian Institute of Technology");
    // Place place17(17, "IMMT");
    // Place place18(18, "Infocity Square");
    // Place place19(19, "ITER");
    // Place place20(20, "Jagamara");
    // Place place21(21, "Jaydev Vihar");
    // Place place22(22, "Kalinga Hospital Square");
    // Place place23(23, "Kalpana Square");
    // Place place24(24, "Khandagiri");
    // Place place25(25, "Kalinga Institute of Medical Sciences");
    // Place place26(26, "Kalinga Institute of Industrial Technology");
    // Place place27(27, "KIIT Square");
    // Place place28(28, "Lingaraj Mandir");
    // Place place29(29, "Lingraj  Station");
    // Place place30(30, "Master Canteen");
    // Place place31(31, "OUAT Square");
    // Place place32(32, "Patia Square");
    // Place place33(33, "Rajmahal Square");
    // Place place34(34, "Rasulgarh");
    // Place place35(35, "Silicon Institute of Technology");
    // Place place36(36, "SUM Hospital");
    // Place place37(37, "Tomando");
    // Place place38(38, "Trident Academy Of Technology");
    // Place place39(39, "Utkal Hospital");
    // Place place40(40, "Vani Vihar");

    //*
    addEdge(Bhubaneswar, 0, 1, 4.6);
    addEdge(Bhubaneswar, 1, 0, 4.6);

    addEdge(Bhubaneswar, 0, 4, 2.2);
    addEdge(Bhubaneswar, 4, 0, 2.2);

    addEdge(Bhubaneswar, 0, 17, 1.1);
    addEdge(Bhubaneswar, 17, 0, 1.1);

    addEdge(Bhubaneswar, 0, 30, 4.4);
    addEdge(Bhubaneswar, 30, 0, 4.4);

    addEdge(Bhubaneswar, 0, 40, 2.1);
    addEdge(Bhubaneswar, 40, 0, 2.1);

    addEdge(Bhubaneswar, 1, 6, 2.2);
    addEdge(Bhubaneswar, 6, 1, 2.2);

    addEdge(Bhubaneswar, 1, 11, 4.9);
    addEdge(Bhubaneswar, 11, 1, 4.9);

    addEdge(Bhubaneswar, 1, 21, 5);
    addEdge(Bhubaneswar, 21, 1, 5);

    addEdge(Bhubaneswar, 1, 31, 2.8);
    addEdge(Bhubaneswar, 31, 1, 2.8);

    addEdge(Bhubaneswar, 1, 33, 0.9);
    addEdge(Bhubaneswar, 33, 1, 0.9);

    addEdge(Bhubaneswar, 2, 24, 4.5);
    addEdge(Bhubaneswar, 24, 2, 4.5);

    addEdge(Bhubaneswar, 3, 9, 3.3);
    addEdge(Bhubaneswar, 9, 3, 3.3);

    addEdge(Bhubaneswar, 3, 24, 2.4);
    addEdge(Bhubaneswar, 24, 3, 2.4);

    addEdge(Bhubaneswar, 4, 22, 3.7);
    addEdge(Bhubaneswar, 22, 4, 3.7);

    addEdge(Bhubaneswar, 5, 11, 1.5);
    addEdge(Bhubaneswar, 11, 5, 1.5);

    addEdge(Bhubaneswar, 5, 24, 1.9);
    addEdge(Bhubaneswar, 24, 5, 1.9);

    addEdge(Bhubaneswar, 6, 28, 4.2);
    addEdge(Bhubaneswar, 28, 6, 4.2);

    addEdge(Bhubaneswar, 6, 31, 3.2);
    addEdge(Bhubaneswar, 31, 6, 3.2);

    addEdge(Bhubaneswar, 7, 13, 1);
    addEdge(Bhubaneswar, 13, 7, 1);

    addEdge(Bhubaneswar, 8, 22, 0.9);
    addEdge(Bhubaneswar, 22, 8, 0.9);

    addEdge(Bhubaneswar, 8, 39, 3.6);
    addEdge(Bhubaneswar, 39, 8, 3.6);

    addEdge(Bhubaneswar, 10, 13, 14);
    addEdge(Bhubaneswar, 13, 10, 14);

    addEdge(Bhubaneswar, 11, 21, 5);
    addEdge(Bhubaneswar, 21, 11, 5);

    addEdge(Bhubaneswar, 11, 31, 2.6);
    addEdge(Bhubaneswar, 31, 11, 2.6);

    addEdge(Bhubaneswar, 11, 36, 4.3);
    addEdge(Bhubaneswar, 36, 11, 4.3);

    addEdge(Bhubaneswar, 12, 13, 1);
    addEdge(Bhubaneswar, 13, 12, 1);

    addEdge(Bhubaneswar, 13, 37, 2.5);
    addEdge(Bhubaneswar, 37, 13, 2.5);

    addEdge(Bhubaneswar, 14, 34, 2.4);
    addEdge(Bhubaneswar, 34, 14, 2.4);

    addEdge(Bhubaneswar, 15, 36, 4.4);
    addEdge(Bhubaneswar, 36, 15, 4.4);

    addEdge(Bhubaneswar, 16, 13, 18.2);
    addEdge(Bhubaneswar, 13, 16, 18.2);

    addEdge(Bhubaneswar, 17, 21, 2.9);
    addEdge(Bhubaneswar, 21, 17, 2.9);

    addEdge(Bhubaneswar, 18, 35, 1.2);
    addEdge(Bhubaneswar, 35, 18, 1.2);

    addEdge(Bhubaneswar, 18, 38, 0.4);
    addEdge(Bhubaneswar, 38, 18, 0.4);

    addEdge(Bhubaneswar, 19, 20, 1.1);
    addEdge(Bhubaneswar, 20, 19, 1.1);

    addEdge(Bhubaneswar, 19, 29, 5);
    addEdge(Bhubaneswar, 29, 19, 5);

    addEdge(Bhubaneswar, 20, 31, 3.2);
    addEdge(Bhubaneswar, 31, 20, 3.2);

    addEdge(Bhubaneswar, 21, 25, 2.7);
    addEdge(Bhubaneswar, 25, 21, 2.7);

    addEdge(Bhubaneswar, 22, 32, 3.2);
    addEdge(Bhubaneswar, 32, 22, 3.2);

    addEdge(Bhubaneswar, 23, 28, 35);
    addEdge(Bhubaneswar, 28, 23, 35);

    addEdge(Bhubaneswar, 23, 33, 1.4);
    addEdge(Bhubaneswar, 33, 23, 1.4);

    addEdge(Bhubaneswar, 24, 37, 7.2);
    addEdge(Bhubaneswar, 37, 24, 7.2);

    addEdge(Bhubaneswar, 25, 26, 1);
    addEdge(Bhubaneswar, 26, 25, 1);

    addEdge(Bhubaneswar, 25, 35, 2);
    addEdge(Bhubaneswar, 35, 25, 2);

    addEdge(Bhubaneswar, 26, 27, 1);
    addEdge(Bhubaneswar, 27, 26, 1);

    addEdge(Bhubaneswar, 27, 32, 2.3);
    addEdge(Bhubaneswar, 32, 27, 2.3);

    addEdge(Bhubaneswar, 29, 33, 4.7);
    addEdge(Bhubaneswar, 33, 29, 4.7);

    addEdge(Bhubaneswar, 30, 33, 2.7);
    addEdge(Bhubaneswar, 33, 30, 2.7);

    addEdge(Bhubaneswar, 30, 40, 4.3);
    addEdge(Bhubaneswar, 40, 30, 4.3);

    addEdge(Bhubaneswar, 34, 40, 5.1);
    addEdge(Bhubaneswar, 40, 34, 5.1);

    addEdge(Bhubaneswar, 38, 39, 2.7);
    addEdge(Bhubaneswar, 39, 38, 2.7);

    return Bhubaneswar;
}