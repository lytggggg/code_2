�?# i n c l u d e   " j t e s t . h "  
 # i n c l u d e   " c o m p l e x _ m a t h _ t e s t _ d a t a . h "  
 # i n c l u d e   " a r r _ d e s c . h "  
 # i n c l u d e   " a r m _ m a t h . h "                       / *   F U T s   * /  
 # i n c l u d e   " r e f . h "                                 / *   R e f e r e n c e   F u n c t i o n s   * /  
 # i n c l u d e   " t e s t _ t e m p l a t e s . h "  
 # i n c l u d e   " c o m p l e x _ m a t h _ t e m p l a t e s . h "  
 # i n c l u d e   " t y p e _ a b b r e v . h "  
  
 # d e f i n e   J T E S T _ A R M _ C M P L X _ M U L T _ R E A L _ T E S T ( s u f f i x ,   c o m p a r i s o n _ i n t e r f a c e )         \  
         C O M P L E X _ M A T H _ D E F I N E _ T E S T _ T E M P L A T E _ B U F 2 _ B L K (                                                   \  
                 c m p l x _ m u l t _ r e a l ,                                                                                                 \  
                 s u f f i x ,                                                                                                                   \  
                 T Y P E _ F R O M _ A B B R E V ( s u f f i x ) ,                                                                               \  
                 T Y P E _ F R O M _ A B B R E V ( s u f f i x ) ,                                                                               \  
                 c o m p a r i s o n _ i n t e r f a c e )  
  
 J T E S T _ A R M _ C M P L X _ M U L T _ R E A L _ T E S T ( f 3 2 ,   C O M P L E X _ M A T H _ C O M P A R E _ C M P L X _ I N T E R F A C E ) ;  
 J T E S T _ A R M _ C M P L X _ M U L T _ R E A L _ T E S T ( q 3 1 ,   C O M P L E X _ M A T H _ S N R _ C O M P A R E _ C M P L X _ I N T E R F A C E ) ;  
 J T E S T _ A R M _ C M P L X _ M U L T _ R E A L _ T E S T ( q 1 5 ,   C O M P L E X _ M A T H _ C O M P A R E _ C M P L X _ I N T E R F A C E ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   C o l l e c t   a l l   t e s t s   i n   a   g r o u p .   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 J T E S T _ D E F I N E _ G R O U P ( c m p l x _ m u l t _ r e a l _ t e s t s )  
 {  
         J T E S T _ T E S T _ C A L L ( a r m _ c m p l x _ m u l t _ r e a l _ f 3 2 _ t e s t ) ;  
         J T E S T _ T E S T _ C A L L ( a r m _ c m p l x _ m u l t _ r e a l _ q 3 1 _ t e s t ) ;  
         J T E S T _ T E S T _ C A L L ( a r m _ c m p l x _ m u l t _ r e a l _ q 1 5 _ t e s t ) ;  
 }  