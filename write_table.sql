INSERT INTO TABLE ai.nyx_feature_prepross 
partition (domain = 'USER', 
            namespace = 'MONTHCARD', 
            feature_name = 'MONTH_CARD_BUY',
            window_name = 'forever',
            agg_name = 'count',
            dt)
select user_id as key, count(price) as value, dt 
FROM dwb.fact_mbk_card_mbk_monthcard_order_i_d t where user_id <> 0 group by user_id, dt;
