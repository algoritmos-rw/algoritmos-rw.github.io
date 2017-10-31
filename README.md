# WachenEntrada

Portal a todos los sitios de los cursos de Wachenhauzer:

* Algoritmos y Programación I -> http://www.algoritmos7540-rw.tk/

* Algoritmos y Programación II -> http://www.algoritmos7541-rw.tk/

* Teoría de Algoritmos I -> https://algoritmos-rw.github.io/tda/

* Teoría de Algoritmos II -> https://algoritmos-rw.github.io/tda2/

---

### Instrucciones para actualizar la página web

Cualquier commit en el directorio raíz se auto-publica en la página al hacer push a la rama _master_. GitHub se encarga de ese proceso.

Para visualizar los cambios de manera local, se debe instalar [Jekyll](https://jekyllrb.com/):

```
# Setup inicial

$ apt-get install ruby
$ apt-get install bundler
$ gem install jekyll bundler
$ apt-get install bundler
$ git clone git@github.com:algoritmos-rw/algoritmos-rw.github.io
$ cd algoritmos-rw.github.io
$ bundle install --path=../gems

# Para visualizar al editar

$ cd algoritmos-rw.github.io
$ bundle exec jekyll serve --livereload --safe
```

### Como agregar o modificar un curso

Para la adición o modificación de un curso se debe modificar el archivo [_data/materias.yml](_data/materias.yml) que contiene el siguiente formato para cada materia:

---
#codigo: "código de la materia"
#titulo: título de la materia
#sitio: link a la página de la materia
#objetivo: Breve objetivo de la materia
#imagen: logo desado
---