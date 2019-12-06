void tracer_courbe (){
    FILE *gp;

    gp = popen(GNUPLOT_PATH, "w");
    if(gp == NULL){
        fprintf(stderr, "Oops, I can't find %s.", GNUPLOT_PATH);
            exit(EXIT_FAILURE);
    }
    fprintf(gp, "load \"config\"\n");
        fflush(gp);
        getchar();
        pclose(gp);
     
    exit(EXIT_SUCCESS);
}