select name from people
where id IN (select directors.person_id from ratings Inner Join directors
            on ratings.movie_id = directors.movie_id
            where ratings.rating >= 9.0);
