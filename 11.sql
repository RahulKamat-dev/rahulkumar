select title from movies
where id in(select movie_id from ratings
                where movie_id in(select movie_id from stars
                                    where person_id in(select id from people where name = "Chadwick Boseman"))
                order by rating desc
                LIMIT 5) ;