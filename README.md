# TPinfo
la fonction initial_coordinate; elle prend en initialisation les coordonnées x, y, z et renvoie la position du point en fonction du coordonées du vecteur vitesse
la fonction set parameter; prend l'adresse de omega, de rho et beta en initialisation et de dt, et demande à lutilsateur de les changer, elle effectue donc un changement par adresse
la fonction lorenz cree un fichier, l'ouvre, le nomme lorenz.dat et fzis une tabulation de x, y, z et du temps, il ya une boucle qui rajoute a chaque fois la nouvelle position dex , de y et de z
la fonction tracer_courbe: elle cree un fichier , elle utilise gunplot puis utilise le fichier config pour tracer la courbe, l'image généré s'arrete que quand lutilsateur clique sur le terminal.
afin de compiler il suffit de taper make main et executer ./main 
