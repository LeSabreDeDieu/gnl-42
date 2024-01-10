# Fonction get_next_line

## Description
La fonction `get_next_line` est une fonction permettant de lire une ligne depuis un descripteur de fichier ou une entrée standard. Cette fonction est implémentée de manière à être utilisée dans des projets nécessitant la lecture de fichiers ou d'entrées utilisateur ligne par ligne.

## Structure du Projet
Le projet est organisé comme suit:

```
.
├── get_next_line_bonus.c
├── get_next_line_bonus.h
├── get_next_line.c
├── get_next_line.h
├── get_next_line_utils_bonus.c
└── get_next_line_utils.c
```

Le projet contient les fichiers source nécessaires pour la fonction `get_next_line` ainsi que les fichiers d'en-tête associés.

## Utilisation
Pour utiliser la fonction `get_next_line` dans votre projet, incluez le fichier d'en-tête `get_next_line.h` dans vos fichiers source. Vous pouvez également inclure `get_next_line_bonus.h` si vous souhaitez utiliser la version bonus de la fonction, qui prend en charge plusieurs descripteurs de fichiers simultanément.

Assurez-vous de compiler votre projet en liant avec les fichiers sources correspondants.

Exemple de compilation:
```bash
gcc -o mon_programme mes_sources.c get_next_line.c get_next_line_utils.c -I.
```

ou avec la version bonus:

```bash
gcc -o mon_programme mes_sources.c get_next_line_bonus.c get_next_line_utils_bonus.c -I.
```

## Auteur
sgabsi
