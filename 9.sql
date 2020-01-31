select distinct name from people
where id IN (select stars.person_id from movies INNER JOIN stars
ON movies.id = stars.movie_id
where movies.year = 2010)
order by birth;