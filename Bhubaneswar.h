#include "Graph.h"

Graph initializer()
{
    //* Initialize the graph with the initial values from the Bhubaneswar Map
    Graph Bhubaneswar(41);

    //* Initialize the places with the numeric values from the map
    Place place0(0, "Acharya Vihar");
    Place place1(1, "AG Square");
    Place place2(2, "AIIMS");
    Place place3(3, "AMRI Hospital");
    Place place4(4, "Apollo Hospital");
    Place place5(5, "Baramunda");
    Place place6(6, "Biju Pattnaik Airport");
    Place place7(7, "C.V. Raman Global University");
    Place place8(8, "CARE Hospital");
    Place place9(9, "Collage of Engineering & Technology");
    Place place10(10, "Centurion University of Technology and Management");
    Place place11(11, "Fire Station");
    Place place12(12, "Gandhi Institute of Technological Advancement ");
    Place place13(13, "Gohiria Square");
    Place place14(14, "Hi-Tech");
    Place place15(15, "International Institute of Information Technology");
    Place place16(16, "Indian Institute of Technology");
    Place place17(17, "IMMT");
    Place place18(18, "Infocity Square");
    Place place19(19, "ITER");
    Place place20(20, "Jagamara");
    Place place21(21, "Jaydev Vihar");
    Place place22(22, "Kalinga Hospital Square");
    Place place23(23, "Kalpana Square");
    Place place24(24, "Khandagiri");
    Place place25(25, "Kalinga Institute of Medical Sciences");
    Place place26(26, "Kalinga Institute of Industrial Technology");
    Place place27(27, "KIIT Square");
    Place place28(28, "Lingaraj Mandir");
    Place place29(29, "Lingraj  Station");
    Place place30(30, "Master Canteen");
    Place place31(31, "OUAT Square");
    Place place32(32, "Patia Square");
    Place place33(33, "Rajmahal Square");
    Place place34(34, "Rasulgarh");
    Place place35(35, "Silicon Institute of Technology");
    Place place36(36, "SUM Hospital");
    Place place37(37, "Tomando");
    Place place38(38, "Trident Academy Of Technology");
    Place place39(39, "Utkal Hospital");
    Place place40(40, "Vani Vihar");

    //*
    Bhubaneswar.addEdge(Edge(0, 1, 4.6));

    return Bhubaneswar;
}

// class Bhubaneswar{
//     Graph bhubaneswarMap;
//     public:
//     Bhubaneswar(){
//         bhubaneswarMap = (Graph) new Graph(20);
//     }
// }