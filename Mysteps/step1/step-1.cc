// headers qui contient la classe Triangulation pour la construction de l'objet triangulation
#include <deal.II/grid/tria.h>
// header pour la creation des grilles
#include <deal.II/grid/grid_generator.h>
// header pour l'écriture des résultats
#include <deal.II/grid/grid_out.h>


// librairies standards pour traiter les entrées sorties
#include <iostream>
#include <fstream>
// librairie pour appeler la valeur absolue et la racine carré
#include <cmath>

// utilisation du namespace de dealii mais pas conseillé pour les grands projets car risques de confusion dans les nommages des fonctions et classes
using namespace dealii;

void first_grid()
{
    Triangulation<2> triangulation;
    GridGenarator::hyper_cube(triangulation);
    triangulation.refine_global(4);
    GridOut     grid_out;
    std::ofstream  out("mygrid-1.svg");
    grid_out.write_svg(triangulation, out);
    std::cout<<"Grid written to grid-1.svg"<<std::endl;

}