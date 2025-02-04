<h1 align="center">
	42 Project - Get Next Line
</h1>

<p align="center">
	<b><i> Reading a line from a fd is way too tedious </i></b>
</p>

<p align="center">
	<img src="https://raw.githubusercontent.com/ayogun/42-project-badges/refs/heads/main/badges/get_next_linem.png" alt="gnl_logo" />
</p>

---
<p align="center">
	<img src="https://img.shields.io/badge/Score-112-darkgreen?style=none&logo=42" alt="Score project : 112"/>
	<img alt="Static Badge" src="https://img.shields.io/badge/Outstanding-1-blue?style=none&logo=42">
	<img alt="GitHub repo size" src="https://img.shields.io/github/repo-size/LeSabreDeDieu/gnl-42?style=none&logo=github">
</p>

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
