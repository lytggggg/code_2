??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ i 2 s . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       I 2 S   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   I n t e g r a t e d   I n t e r c h i p   S o u n d   ( I 2 S )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                     # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
   [ . . ]  
         T h e   I 2 S   H A L   d r i v e r   c a n   b e   u s e d   a s   f o l l o w :  
  
         ( # )   D e c l a r e   a   I 2 S _ H a n d l e T y p e D e f   h a n d l e   s t r u c t u r e .  
         ( # )   I n i t i a l i z e   t h e   I 2 S   l o w   l e v e l   r e s o u r c e s   b y   i m p l e m e n t   t h e   H A L _ I 2 S _ M s p I n i t ( )   A P I :  
                 ( # # )   E n a b l e   t h e   S P I x   i n t e r f a c e   c l o c k .  
                 ( # # )   I 2 S   p i n s   c o n f i g u r a t i o n :  
                         ( + + + )   E n a b l e   t h e   c l o c k   f o r   t h e   I 2 S   G P I O s .  
                         ( + + + )   C o n f i g u r e   t h e s e   I 2 S   p i n s   a s   a l t e r n a t e   f u n c t i o n   p u l l - u p .  
                 ( # # )   N V I C   c o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   i n t e r r u p t   p r o c e s s   ( H A L _ I 2 S _ T r a n s m i t _ I T ( )  
                           a n d   H A L _ I 2 S _ R e c e i v e _ I T ( )   A P I s ) .  
                         ( + + + )   C o n f i g u r e   t h e   I 2 S x   i n t e r r u p t   p r i o r i t y .  
                         ( + + + )   E n a b l e   t h e   N V I C   I 2 S   I R Q   h a n d l e .  
                 ( # # )   D M A   C o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   D M A   p r o c e s s   ( H A L _ I 2 S _ T r a n s m i t _ D M A ( )  
                           a n d   H A L _ I 2 S _ R e c e i v e _ D M A ( )   A P I s :  
                         ( + + + )   D e c l a r e   a   D M A   h a n d l e   s t r u c t u r e   f o r   t h e   T x / R x   S t r e a m / C h a n n e l .  
                         ( + + + )   E n a b l e   t h e   D M A x   i n t e r f a c e   c l o c k .  
                         ( + + + )   C o n f i g u r e   t h e   d e c l a r e d   D M A   h a n d l e   s t r u c t u r e   w i t h   t h e   r e q u i r e d   T x / R x   p a r a m e t e r s .  
                         ( + + + )   C o n f i g u r e   t h e   D M A   T x / R x   S t r e a m / C h a n n e l .  
                         ( + + + )   A s s o c i a t e   t h e   i n i t i a l i z e d   D M A   h a n d l e   t o   t h e   I 2 S   D M A   T x / R x   h a n d l e .  
                         ( + + + )   C o n f i g u r e   t h e   p r i o r i t y   a n d   e n a b l e   t h e   N V I C   f o r   t h e   t r a n s f e r   c o m p l e t e   i n t e r r u p t   o n   t h e  
                                     D M A   T x / R x   S t r e a m / C h a n n e l .  
  
       ( # )   P r o g r a m   t h e   M o d e ,   S t a n d a r d ,   D a t a   F o r m a t ,   M C L K   O u t p u t ,   A u d i o   f r e q u e n c y   a n d   P o l a r i t y  
               u s i n g   H A L _ I 2 S _ I n i t ( )   f u n c t i o n .  
  
       - @ -   T h e   s p e c i f i c   I 2 S   i n t e r r u p t s   ( T r a n s m i s s i o n   c o m p l e t e   i n t e r r u p t ,  
               R X N E   i n t e r r u p t   a n d   E r r o r   I n t e r r u p t s )   w i l l   b e   m a n a g e d   u s i n g   t h e   m a c r o s  
               _ _ H A L _ I 2 S _ E N A B L E _ I T ( )   a n d   _ _ H A L _ I 2 S _ D I S A B L E _ I T ( )   i n s i d e   t h e   t r a n s m i t   a n d   r e c e i v e   p r o c e s s .  
       - @ -   T h e   I 2 S x C L K   s o u r c e   i s   t h e   s y s t e m   c l o c k   ( p r o v i d e d   b y   t h e   H S I ,   t h e   H S E   o r   t h e   P L L ,   a n d   s o u r c i n g   t h e   A H B   c l o c k ) .  
               F o r   c o n n e c t i v i t y   l i n e   d e v i c e s ,   t h e   I 2 S x C L K   s o u r c e   c a n   b e   e i t h e r   S Y S C L K   o r   t h e   P L L 3   V C O   ( 2   x   P L L 3 C L K )   c l o c k  
               i n   o r d e r   t o   a c h i e v e   t h e   m a x i m u m   a c c u r a c y .  
       - @ -   M a k e   s u r e   t h a t   e i t h e r :  
                 ( + @ )   E x t e r n a l   c l o c k   s o u r c e   i s   c o n f i g u r e d   a f t e r   s e t t i n g   c o r r e c t l y  
                           t h e   d e f i n e   c o n s t a n t   H S E _ V A L U E   i n   t h e   s t m 3 2 f 1 x x _ h a l _ c o n f . h   f i l e .  
  
         ( # )   T h r e e   m o d e   o f   o p e r a t i o n s   a r e   a v a i l a b l e   w i t h i n   t h i s   d r i v e r   :  
  
       * * *   P o l l i n g   m o d e   I O   o p e r a t i o n   * * *  
       = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
       [ . . ]  
           ( + )   S e n d   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   u s i n g   H A L _ I 2 S _ T r a n s m i t ( )  
           ( + )   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   u s i n g   H A L _ I 2 S _ R e c e i v e ( )  
  
       * * *   I n t e r r u p t   m o d e   I O   o p e r a t i o n   * * *  
       = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
       [ . . ]  
           ( + )   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   u s i n g   H A L _ I 2 S _ T r a n s m i t _ I T ( )  
           ( + )   A t   t r a n s m i s s i o n   e n d   o f   h a l f   t r a n s f e r   H A L _ I 2 S _ T x H a l f C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I 2 S _ T x H a l f C p l t C a l l b a c k  
           ( + )   A t   t r a n s m i s s i o n   e n d   o f   t r a n s f e r   H A L _ I 2 S _ T x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I 2 S _ T x C p l t C a l l b a c k  
           ( + )   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   u s i n g   H A L _ I 2 S _ R e c e i v e _ I T ( )  
           ( + )   A t   r e c e p t i o n   e n d   o f   h a l f   t r a n s f e r   H A L _ I 2 S _ R x H a l f C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I 2 S _ R x H a l f C p l t C a l l b a c k  
           ( + )   A t   r e c e p t i o n   e n d   o f   t r a n s f e r   H A L _ I 2 S _ R x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I 2 S _ R x C p l t C a l l b a c k  
           ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   H A L _ I 2 S _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I 2 S _ E r r o r C a l l b a c k  
  
       * * *   D M A   m o d e   I O   o p e r a t i o n   * * *  
       = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
       [ . . ]  
           ( + )   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   ( D M A )   u s i n g   H A L _ I 2 S _ T r a n s m i t _ D M A ( )  
           ( + )   A t   t r a n s m i s s i o n   e n d   o f   h a l f   t r a n s f e r   H A L _ I 2 S _ T x H a l f C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I 2 S _ T x H a l f C p l t C a l l b a c k  
           ( + )   A t   t r a n s m i s s i o n   e n d   o f   t r a n s f e r   H A L _ I 2 S _ T x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I 2 S _ T x C p l t C a l l b a c k  
           ( + )   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   ( D M A )   u s i n g   H A L _ I 2 S _ R e c e i v e _ D M A ( )  
           ( + )   A t   r e c e p t i o n   e n d   o f   h a l f   t r a n s f e r   H A L _ I 2 S _ R x H a l f C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I 2 S _ R x H a l f C p l t C a l l b a c k  
           ( + )   A t   r e c e p t i o n   e n d   o f   t r a n s f e r   H A L _ I 2 S _ R x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I 2 S _ R x C p l t C a l l b a c k  
           ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   H A L _ I 2 S _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                   a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I 2 S _ E r r o r C a l l b a c k  
           ( + )   P a u s e   t h e   D M A   T r a n s f e r   u s i n g   H A L _ I 2 S _ D M A P a u s e ( )  
           ( + )   R e s u m e   t h e   D M A   T r a n s f e r   u s i n g   H A L _ I 2 S _ D M A R e s u m e ( )  
           ( + )   S t o p   t h e   D M A   T r a n s f e r   u s i n g   H A L _ I 2 S _ D M A S t o p ( )  
                   I n   S l a v e   m o d e ,   i f   H A L _ I 2 S _ D M A S t o p   i s   u s e d   t o   s t o p   t h e   c o m m u n i c a t i o n ,   a n   e r r o r  
                   H A L _ I 2 S _ E R R O R _ B U S Y _ L I N E _ R X   i s   r a i s e d   a s   t h e   m a s t e r   c o n t i n u e   t o   t r a n s m i t   d a t a .  
                   I n   t h i s   c a s e   _ _ H A L _ I 2 S _ F L U S H _ R X _ D R   m a c r o   m u s t   b e   u s e d   t o   f l u s h   t h e   r e m a i n i n g   d a t a  
                   i n s i d e   D R   r e g i s t e r   a n d   a v o i d   u s i n g   D e I n i t / I n i t   p r o c e s s   f o r   t h e   n e x t   t r a n s f e r .  
  
       * * *   I 2 S   H A L   d r i v e r   m a c r o s   l i s t   * * *  
       = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
       [ . . ]  
           B e l o w   t h e   l i s t   o f   m o s t   u s e d   m a c r o s   i n   I 2 S   H A L   d r i v e r .  
  
             ( + )   _ _ H A L _ I 2 S _ E N A B L E :   E n a b l e   t h e   s p e c i f i e d   S P I   p e r i p h e r a l   ( i n   I 2 S   m o d e )  
             ( + )   _ _ H A L _ I 2 S _ D I S A B L E :   D i s a b l e   t h e   s p e c i f i e d   S P I   p e r i p h e r a l   ( i n   I 2 S   m o d e )  
             ( + )   _ _ H A L _ I 2 S _ E N A B L E _ I T   :   E n a b l e   t h e   s p e c i f i e d   I 2 S   i n t e r r u p t s  
             ( + )   _ _ H A L _ I 2 S _ D I S A B L E _ I T   :   D i s a b l e   t h e   s p e c i f i e d   I 2 S   i n t e r r u p t s  
             ( + )   _ _ H A L _ I 2 S _ G E T _ F L A G :   C h e c k   w h e t h e r   t h e   s p e c i f i e d   I 2 S   f l a g   i s   s e t   o r   n o t  
             ( + )   _ _ H A L _ I 2 S _ F L U S H _ R X _ D R :   R e a d   D R   R e g i s t e r   t o   F l u s h   R X   D a t a  
  
         [ . . ]  
             ( @ )   Y o u   c a n   r e f e r   t o   t h e   I 2 S   H A L   d r i v e r   h e a d e r   f i l e   f o r   m o r e   u s e f u l   m a c r o s  
  
       * * *   I 2 S   H A L   d r i v e r   m a c r o s   l i s t   * * *  
       = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
       [ . . ]  
               C a l l b a c k   r e g i s t r a t i o n :  
  
             ( # )   T h e   c o m p i l a t i o n   f l a g   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1 U  
                     a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
                     U s e   F u n c t i o n s   H A L _ I 2 S _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a n   i n t e r r u p t   c a l l b a c k .  
  
                     F u n c t i o n   H A L _ I 2 S _ R e g i s t e r C a l l b a c k ( )   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
                         ( + + )   T x C p l t C a l l b a c k                 :   I 2 S   T x   C o m p l e t e d   c a l l b a c k  
                         ( + + )   R x C p l t C a l l b a c k                 :   I 2 S   R x   C o m p l e t e d   c a l l b a c k  
                         ( + + )   T x H a l f C p l t C a l l b a c k         :   I 2 S   T x   H a l f   C o m p l e t e d   c a l l b a c k  
                         ( + + )   R x H a l f C p l t C a l l b a c k         :   I 2 S   R x   H a l f   C o m p l e t e d   c a l l b a c k  
                         ( + + )   E r r o r C a l l b a c k                   :   I 2 S   E r r o r   c a l l b a c k  
                         ( + + )   M s p I n i t C a l l b a c k               :   I 2 S   M s p   I n i t   c a l l b a c k  
                         ( + + )   M s p D e I n i t C a l l b a c k           :   I 2 S   M s p   D e I n i t   c a l l b a c k  
                     T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
                     a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
  
             ( # )   U s e   f u n c t i o n   H A L _ I 2 S _ U n R e g i s t e r C a l l b a c k   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
                     w e a k   f u n c t i o n .  
                     H A L _ I 2 S _ U n R e g i s t e r C a l l b a c k   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,  
                     a n d   t h e   C a l l b a c k   I D .  
                     T h i s   f u n c t i o n   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
                         ( + + )   T x C p l t C a l l b a c k                 :   I 2 S   T x   C o m p l e t e d   c a l l b a c k  
                         ( + + )   R x C p l t C a l l b a c k                 :   I 2 S   R x   C o m p l e t e d   c a l l b a c k  
                         ( + + )   T x H a l f C p l t C a l l b a c k         :   I 2 S   T x   H a l f   C o m p l e t e d   c a l l b a c k  
                         ( + + )   R x H a l f C p l t C a l l b a c k         :   I 2 S   R x   H a l f   C o m p l e t e d   c a l l b a c k  
                         ( + + )   E r r o r C a l l b a c k                   :   I 2 S   E r r o r   c a l l b a c k  
                         ( + + )   M s p I n i t C a l l b a c k               :   I 2 S   M s p   I n i t   c a l l b a c k  
                         ( + + )   M s p D e I n i t C a l l b a c k           :   I 2 S   M s p   D e I n i t   c a l l b a c k  
  
               [ . . ]  
               B y   d e f a u l t ,   a f t e r   t h e   H A L _ I 2 S _ I n i t ( )   a n d   w h e n   t h e   s t a t e   i s   H A L _ I 2 S _ S T A T E _ R E S E T  
               a l l   c a l l b a c k s   a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s :  
               e x a m p l e s   H A L _ I 2 S _ M a s t e r T x C p l t C a l l b a c k ( ) ,   H A L _ I 2 S _ M a s t e r R x C p l t C a l l b a c k ( ) .  
               E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   f u n c t i o n s   t h a t   a r e  
               r e s e t   t o   t h e   l e g a c y   w e a k   f u n c t i o n s   i n   t h e   H A L _ I 2 S _ I n i t ( ) /   H A L _ I 2 S _ D e I n i t ( )   o n l y   w h e n  
               t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
               I f   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   H A L _ I 2 S _ I n i t ( ) /   H A L _ I 2 S _ D e I n i t ( )  
               k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d )   w h a t e v e r   t h e   s t a t e .  
  
               [ . . ]  
               C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   H A L _ I 2 S _ S T A T E _ R E A D Y   s t a t e   o n l y .  
               E x c e p t i o n   d o n e   M s p I n i t / M s p D e I n i t   f u n c t i o n s   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
               i n   H A L _ I 2 S _ S T A T E _ R E A D Y   o r   H A L _ I 2 S _ S T A T E _ R E S E T   s t a t e ,  
               t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d   d u r i n g   t h e   I n i t / D e I n i t .  
               T h e n ,   t h e   u s e r   f i r s t   r e g i s t e r s   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
               u s i n g   H A L _ I 2 S _ R e g i s t e r C a l l b a c k ( )   b e f o r e   c a l l i n g   H A L _ I 2 S _ D e I n i t ( )  
               o r   H A L _ I 2 S _ I n i t ( )   f u n c t i o n .  
  
               [ . . ]  
               W h e n   t h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
               n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t e r i n g   f e a t u r e   i s   n o t   a v a i l a b l e  
               a n d   w e a k   ( s u r c h a r g e d )   c a l l b a c k s   a r e   u s e d .  
  
       * * *   I 2 S   W o r k a r o u n d s   l i n k e d   t o   S i l i c o n   L i m i t a t i o n   * * *  
       = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
       [ . . ]  
               ( @ )   O n l y   t h e   1 6 - b i t   m o d e   w i t h   n o   d a t a   e x t e n s i o n   c a n   b e   u s e d   w h e n   t h e   I 2 S  
                       i s   i n   M a s t e r   a n d   u s e d   t h e   P C M   l o n g   s y n c h r o n i z a t i o n   m o d e .  
  
     @ e n d v e r b a t i m  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 # i f d e f   H A L _ I 2 S _ M O D U L E _ E N A B L E D  
  
 # i f   d e f i n e d ( S P I _ I 2 S _ S U P P O R T )  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S   I 2 S  
     *   @ b r i e f   I 2 S   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # d e f i n e   I 2 S _ T I M E O U T _ F L A G                     1 0 0 U                   / * ! <   T i m e o u t   1 0 0   m s                         * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   I 2 S _ P r i v a t e _ F u n c t i o n s   I 2 S   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 s t a t i c   v o i d                               I 2 S _ D M A T x C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d                               I 2 S _ D M A T x H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d                               I 2 S _ D M A R x C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d                               I 2 S _ D M A R x H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d                               I 2 S _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d                               I 2 S _ T r a n s m i t _ I T ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s ) ;  
 s t a t i c   v o i d                               I 2 S _ R e c e i v e _ I T ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f     I 2 S _ W a i t F l a g S t a t e U n t i l T i m e o u t ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s ,   u i n t 3 2 _ t   F l a g ,   F l a g S t a t u s   S t a t e ,  
                                                                                                                 u i n t 3 2 _ t   T i m e o u t ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   I 2 S _ E x p o r t e d _ F u n c t i o n s   I 2 S   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p     I 2 S _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e   a n d  
                     d e - i n i t i a l i z e   t h e   I 2 S x   p e r i p h e r a l   i n   s i m p l e x   m o d e :  
  
             ( + )   U s e r   m u s t   I m p l e m e n t   H A L _ I 2 S _ M s p I n i t ( )   f u n c t i o n   i n   w h i c h   h e   c o n f i g u r e s  
                     a l l   r e l a t e d   p e r i p h e r a l s   r e s o u r c e s   ( C L O C K ,   G P I O ,   D M A ,   I T   a n d   N V I C   ) .  
  
             ( + )   C a l l   t h e   f u n c t i o n   H A L _ I 2 S _ I n i t ( )   t o   c o n f i g u r e   t h e   s e l e c t e d   d e v i c e   w i t h  
                     t h e   s e l e c t e d   c o n f i g u r a t i o n :  
                 ( + + )   M o d e  
                 ( + + )   S t a n d a r d  
                 ( + + )   D a t a   F o r m a t  
                 ( + + )   M C L K   O u t p u t  
                 ( + + )   A u d i o   f r e q u e n c y  
                 ( + + )   P o l a r i t y  
  
           ( + )   C a l l   t h e   f u n c t i o n   H A L _ I 2 S _ D e I n i t ( )   t o   r e s t o r e   t h e   d e f a u l t   c o n f i g u r a t i o n  
                     o f   t h e   s e l e c t e d   I 2 S x   p e r i p h e r a l .  
     @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   I 2 S   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s  
     *                   i n   t h e   I 2 S _ I n i t T y p e D e f   a n d   c r e a t e   t h e   a s s o c i a t e d   h a n d l e .  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ I n i t ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     u i n t 3 2 _ t   i 2 s d i v ;  
     u i n t 3 2 _ t   i 2 s o d d ;  
     u i n t 3 2 _ t   p a c k e t l e n g t h ;  
     u i n t 3 2 _ t   t m p ;  
     u i n t 3 2 _ t   i 2 s c l k ;  
  
     / *   C h e c k   t h e   I 2 S   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h i 2 s   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   I 2 S   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 S _ A L L _ I N S T A N C E ( h i 2 s - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 S _ M O D E ( h i 2 s - > I n i t . M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 S _ S T A N D A R D ( h i 2 s - > I n i t . S t a n d a r d ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 S _ D A T A _ F O R M A T ( h i 2 s - > I n i t . D a t a F o r m a t ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 S _ M C L K _ O U T P U T ( h i 2 s - > I n i t . M C L K O u t p u t ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 S _ A U D I O _ F R E Q ( h i 2 s - > I n i t . A u d i o F r e q ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 S _ C P O L ( h i 2 s - > I n i t . C P O L ) ) ;  
  
     i f   ( h i 2 s - > S t a t e   = =   H A L _ I 2 S _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h i 2 s - > L o c k   =   H A L _ U N L O C K E D ;  
  
 # i f   ( U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
         / *   I n i t   t h e   I 2 S   C a l l b a c k   s e t t i n g s   * /  
         h i 2 s - > T x C p l t C a l l b a c k               =   H A L _ I 2 S _ T x C p l t C a l l b a c k ;                     / *   L e g a c y   w e a k   T x C p l t C a l l b a c k               * /  
         h i 2 s - > R x C p l t C a l l b a c k               =   H A L _ I 2 S _ R x C p l t C a l l b a c k ;                     / *   L e g a c y   w e a k   R x C p l t C a l l b a c k               * /  
         h i 2 s - > T x H a l f C p l t C a l l b a c k       =   H A L _ I 2 S _ T x H a l f C p l t C a l l b a c k ;             / *   L e g a c y   w e a k   T x H a l f C p l t C a l l b a c k       * /  
         h i 2 s - > R x H a l f C p l t C a l l b a c k       =   H A L _ I 2 S _ R x H a l f C p l t C a l l b a c k ;             / *   L e g a c y   w e a k   R x H a l f C p l t C a l l b a c k       * /  
         h i 2 s - > E r r o r C a l l b a c k                 =   H A L _ I 2 S _ E r r o r C a l l b a c k ;                       / *   L e g a c y   w e a k   E r r o r C a l l b a c k                 * /  
  
         i f   ( h i 2 s - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h i 2 s - > M s p I n i t C a l l b a c k   =   H A L _ I 2 S _ M s p I n i t ;   / *   L e g a c y   w e a k   M s p I n i t     * /  
         }  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C . . .   * /  
         h i 2 s - > M s p I n i t C a l l b a c k ( h i 2 s ) ;  
 # e l s e  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   C O R T E X . . . e t c   * /  
         H A L _ I 2 S _ M s p I n i t ( h i 2 s ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ B U S Y ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - -   S P I x   I 2 S C F G R   &   I 2 S P R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - * /  
     / *   C l e a r   I 2 S M O D ,   I 2 S E ,   I 2 S C F G ,   P C M S Y N C ,   I 2 S S T D ,   C K P O L ,   D A T L E N   a n d   C H L E N   b i t s   * /  
     C L E A R _ B I T ( h i 2 s - > I n s t a n c e - > I 2 S C F G R ,   ( S P I _ I 2 S C F G R _ C H L E N   |   S P I _ I 2 S C F G R _ D A T L E N   |   S P I _ I 2 S C F G R _ C K P O L   |   \  
                                                                             S P I _ I 2 S C F G R _ I 2 S S T D   |   S P I _ I 2 S C F G R _ P C M S Y N C   |   S P I _ I 2 S C F G R _ I 2 S C F G   |   \  
                                                                             S P I _ I 2 S C F G R _ I 2 S E   |   S P I _ I 2 S C F G R _ I 2 S M O D ) ) ;  
     h i 2 s - > I n s t a n c e - > I 2 S P R   =   0 x 0 0 0 2 U ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - -   I 2 S P R :   I 2 S D I V   a n d   O D D   C a l c u l a t i o n   - - - - - - - - - - - - - - - - - * /  
     / *   I f   t h e   r e q u e s t e d   a u d i o   f r e q u e n c y   i s   n o t   t h e   d e f a u l t ,   c o m p u t e   t h e   p r e s c a l e r   * /  
     i f   ( h i 2 s - > I n i t . A u d i o F r e q   ! =   I 2 S _ A U D I O F R E Q _ D E F A U L T )  
     {  
         / *   C h e c k   t h e   f r a m e   l e n g t h   ( F o r   t h e   P r e s c a l e r   c o m p u t i n g )   * * * * * * * * * * * * * * * * * * * * /  
         i f   ( h i 2 s - > I n i t . D a t a F o r m a t   = =   I 2 S _ D A T A F O R M A T _ 1 6 B )  
         {  
             / *   P a c k e t   l e n g t h   i s   1 6   b i t s   * /  
             p a c k e t l e n g t h   =   1 6 U ;  
         }  
         e l s e  
         {  
             / *   P a c k e t   l e n g t h   i s   3 2   b i t s   * /  
             p a c k e t l e n g t h   =   3 2 U ;  
         }  
  
         / *   I 2 S   s t a n d a r d   * /  
         i f   ( h i 2 s - > I n i t . S t a n d a r d   < =   I 2 S _ S T A N D A R D _ L S B )  
         {  
             / *   I n   I 2 S   s t a n d a r d   p a c k e t   l e n g t h   i s   m u l t i p l i e d   b y   2   * /  
             p a c k e t l e n g t h   =   p a c k e t l e n g t h   *   2 U ;  
         }  
  
         / *   G e t   t h e   s o u r c e   c l o c k   v a l u e   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
         i f   ( h i 2 s - > I n s t a n c e   = =   S P I 2 )  
         {  
             / *   G e t   t h e   s o u r c e   c l o c k   v a l u e :   b a s e d   o n   S P I 2   I n s t a n c e   * /  
             i 2 s c l k   =   H A L _ R C C E x _ G e t P e r i p h C L K F r e q ( R C C _ P E R I P H C L K _ I 2 S 2 ) ;  
         }  
         e l s e   i f   ( h i 2 s - > I n s t a n c e   = =   S P I 3 )  
         {  
             / *   G e t   t h e   s o u r c e   c l o c k   v a l u e :   b a s e d   o n   S P I 3   I n s t a n c e   * /  
             i 2 s c l k   =   H A L _ R C C E x _ G e t P e r i p h C L K F r e q ( R C C _ P E R I P H C L K _ I 2 S 3 ) ;  
         }  
         e l s e  
         {  
             / *   G e t   t h e   s o u r c e   c l o c k   v a l u e :   b a s e d   o n   S y s t e m   C l o c k   v a l u e   * /  
             i 2 s c l k   =   H A L _ R C C _ G e t S y s C l o c k F r e q ( ) ;  
         }  
         / *   C o m p u t e   t h e   R e a l   d i v i d e r   d e p e n d i n g   o n   t h e   M C L K   o u t p u t   s t a t e ,   w i t h   a   f l o a t i n g   p o i n t   * /  
         i f   ( h i 2 s - > I n i t . M C L K O u t p u t   = =   I 2 S _ M C L K O U T P U T _ E N A B L E )  
         {  
             / *   M C L K   o u t p u t   i s   e n a b l e d   * /  
             i f   ( h i 2 s - > I n i t . D a t a F o r m a t   ! =   I 2 S _ D A T A F O R M A T _ 1 6 B )  
             {  
                 t m p   =   ( u i n t 3 2 _ t ) ( ( ( ( ( i 2 s c l k   /   ( p a c k e t l e n g t h   *   4 U ) )   *   1 0 U )   /   h i 2 s - > I n i t . A u d i o F r e q ) )   +   5 U ) ;  
             }  
             e l s e  
             {  
                 t m p   =   ( u i n t 3 2 _ t ) ( ( ( ( ( i 2 s c l k   /   ( p a c k e t l e n g t h   *   8 U ) )   *   1 0 U )   /   h i 2 s - > I n i t . A u d i o F r e q ) )   +   5 U ) ;  
             }  
         }  
         e l s e  
         {  
             / *   M C L K   o u t p u t   i s   d i s a b l e d   * /  
             t m p   =   ( u i n t 3 2 _ t ) ( ( ( ( ( i 2 s c l k   /   p a c k e t l e n g t h )   *   1 0 U )   /   h i 2 s - > I n i t . A u d i o F r e q ) )   +   5 U ) ;  
         }  
  
         / *   R e m o v e   t h e   f l a t t i n g   p o i n t   * /  
         t m p   =   t m p   /   1 0 U ;  
  
         / *   C h e c k   t h e   p a r i t y   o f   t h e   d i v i d e r   * /  
         i 2 s o d d   =   ( u i n t 3 2 _ t ) ( t m p   &   ( u i n t 3 2 _ t ) 1 U ) ;  
  
         / *   C o m p u t e   t h e   i 2 s d i v   p r e s c a l e r   * /  
         i 2 s d i v   =   ( u i n t 3 2 _ t ) ( ( t m p   -   i 2 s o d d )   /   2 U ) ;  
  
         / *   G e t   t h e   M a s k   f o r   t h e   O d d   b i t   ( S P I _ I 2 S P R [ 8 ] )   r e g i s t e r   * /  
         i 2 s o d d   =   ( u i n t 3 2 _ t ) ( i 2 s o d d   < <   8 U ) ;  
     }  
     e l s e  
     {  
         / *   S e t   t h e   d e f a u l t   v a l u e s   * /  
         i 2 s d i v   =   2 U ;  
         i 2 s o d d   =   0 U ;  
     }  
  
     / *   T e s t   i f   t h e   d i v i d e r   i s   1   o r   0   o r   g r e a t e r   t h a n   0 x F F   * /  
     i f   ( ( i 2 s d i v   <   2 U )   | |   ( i 2 s d i v   >   0 x F F U ) )  
     {  
         / *   S e t   t h e   e r r o r   c o d e   a n d   e x e c u t e   e r r o r   c a l l b a c k * /  
         S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ P R E S C A L E R ) ;  
         r e t u r n     H A L _ E R R O R ;  
     }  
  
     / * - - - - - - - - - - - - - - - - - - - - - - -   S P I x   I 2 S C F G R   &   I 2 S P R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - * /  
  
     / *   W r i t e   t o   S P I x   I 2 S P R   r e g i s t e r   t h e   c o m p u t e d   v a l u e   * /  
     h i 2 s - > I n s t a n c e - > I 2 S P R   =   ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) i 2 s d i v   |   ( u i n t 3 2 _ t ) ( i 2 s o d d   |   ( u i n t 3 2 _ t ) h i 2 s - > I n i t . M C L K O u t p u t ) ) ;  
  
     / *   C l e a r   I 2 S M O D ,   I 2 S E ,   I 2 S C F G ,   P C M S Y N C ,   I 2 S S T D ,   C K P O L ,   D A T L E N   a n d   C H L E N   b i t s   * /  
     / *   A n d   c o n f i g u r e   t h e   I 2 S   w i t h   t h e   I 2 S _ I n i t S t r u c t   v a l u e s                                             * /  
     M O D I F Y _ R E G ( h i 2 s - > I n s t a n c e - > I 2 S C F G R ,   ( S P I _ I 2 S C F G R _ C H L E N   |   S P I _ I 2 S C F G R _ D A T L E N   |   \  
                                                                               S P I _ I 2 S C F G R _ C K P O L   |   S P I _ I 2 S C F G R _ I 2 S S T D   |   \  
                                                                               S P I _ I 2 S C F G R _ P C M S Y N C   |   S P I _ I 2 S C F G R _ I 2 S C F G   |   \  
                                                                               S P I _ I 2 S C F G R _ I 2 S E     |   S P I _ I 2 S C F G R _ I 2 S M O D ) ,   \  
                           ( S P I _ I 2 S C F G R _ I 2 S M O D   |   h i 2 s - > I n i t . M o d e   |   \  
                             h i 2 s - > I n i t . S t a n d a r d   |   h i 2 s - > I n i t . D a t a F o r m a t   |   \  
                             h i 2 s - > I n i t . C P O L ) ) ;  
  
 # i f   d e f i n e d ( S P I _ I 2 S C F G R _ A S T R T E N )  
     i f   ( ( h i 2 s - > I n i t . S t a n d a r d   = =   I 2 S _ S T A N D A R D _ P C M _ S H O R T )   | |   ( ( h i 2 s - > I n i t . S t a n d a r d   = =   I 2 S _ S T A N D A R D _ P C M _ L O N G ) ) )  
     {  
         / *   W r i t e   t o   S P I x   I 2 S C F G R   * /  
         S E T _ B I T ( h i 2 s - > I n s t a n c e - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ A S T R T E N ) ;  
     }  
 # e n d i f   / *   S P I _ I 2 S C F G R _ A S T R T E N   * /  
  
     h i 2 s - > E r r o r C o d e   =   H A L _ I 2 S _ E R R O R _ N O N E ;  
     h i 2 s - > S t a t e           =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f   D e I n i t i a l i z e s   t h e   I 2 S   p e r i p h e r a l  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ D e I n i t ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     / *   C h e c k   t h e   I 2 S   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h i 2 s   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 S _ A L L _ I N S T A N C E ( h i 2 s - > I n s t a n c e ) ) ;  
  
     h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ B U S Y ;  
  
     / *   D i s a b l e   t h e   I 2 S   P e r i p h e r a l   C l o c k   * /  
     _ _ H A L _ I 2 S _ D I S A B L E ( h i 2 s ) ;  
  
 # i f   ( U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
     i f   ( h i 2 s - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h i 2 s - > M s p D e I n i t C a l l b a c k   =   H A L _ I 2 S _ M s p D e I n i t ;   / *   L e g a c y   w e a k   M s p D e I n i t     * /  
     }  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   G P I O ,   C L O C K ,   N V I C . . .   * /  
     h i 2 s - > M s p D e I n i t C a l l b a c k ( h i 2 s ) ;  
 # e l s e  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   G P I O ,   C L O C K ,   N V I C . . .   * /  
     H A L _ I 2 S _ M s p D e I n i t ( h i 2 s ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   * /  
  
     h i 2 s - > E r r o r C o d e   =   H A L _ I 2 S _ E R R O R _ N O N E ;  
     h i 2 s - > S t a t e           =   H A L _ I 2 S _ S T A T E _ R E S E T ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h i 2 s ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f   I 2 S   M S P   I n i t  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 S _ M s p I n i t ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 s ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 S _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f   I 2 S   M S P   D e I n i t  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 S _ M s p D e I n i t ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 s ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 S _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 # i f   ( U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   I 2 S   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h i 2 s   P o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 S .  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ R e g i s t e r C a l l b a c k ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s ,   H A L _ I 2 S _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,  
                                                                                       p I 2 S _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h i 2 s - > E r r o r C o d e   | =   H A L _ I 2 S _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 s ) ;  
  
     i f   ( H A L _ I 2 S _ S T A T E _ R E A D Y   = =   h i 2 s - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ I 2 S _ T X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 s - > T x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ R X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 s - > R x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ T X _ H A L F _ C O M P L E T E _ C B _ I D   :  
                 h i 2 s - > T x H a l f C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ R X _ H A L F _ C O M P L E T E _ C B _ I D   :  
                 h i 2 s - > R x H a l f C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ E R R O R _ C B _ I D   :  
                 h i 2 s - > E r r o r C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ M S P I N I T _ C B _ I D   :  
                 h i 2 s - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ M S P D E I N I T _ C B _ I D   :  
                 h i 2 s - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ I N V A L I D _ C A L L B A C K ) ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( H A L _ I 2 S _ S T A T E _ R E S E T   = =   h i 2 s - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ I 2 S _ M S P I N I T _ C B _ I D   :  
                 h i 2 s - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ M S P D E I N I T _ C B _ I D   :  
                 h i 2 s - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ I N V A L I D _ C A L L B A C K ) ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ I N V A L I D _ C A L L B A C K ) ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h i 2 s ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a n   I 2 S   C a l l b a c k  
     *                   I 2 S   c a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h i 2 s   P o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 S .  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ U n R e g i s t e r C a l l b a c k ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s ,   H A L _ I 2 S _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 s ) ;  
  
     i f   ( H A L _ I 2 S _ S T A T E _ R E A D Y   = =   h i 2 s - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ I 2 S _ T X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 s - > T x C p l t C a l l b a c k   =   H A L _ I 2 S _ T x C p l t C a l l b a c k ;                                 / *   L e g a c y   w e a k   T x C p l t C a l l b a c k               * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ R X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 s - > R x C p l t C a l l b a c k   =   H A L _ I 2 S _ R x C p l t C a l l b a c k ;                                 / *   L e g a c y   w e a k   R x C p l t C a l l b a c k               * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ T X _ H A L F _ C O M P L E T E _ C B _ I D   :  
                 h i 2 s - > T x H a l f C p l t C a l l b a c k   =   H A L _ I 2 S _ T x H a l f C p l t C a l l b a c k ;                 / *   L e g a c y   w e a k   T x H a l f C p l t C a l l b a c k       * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ R X _ H A L F _ C O M P L E T E _ C B _ I D   :  
                 h i 2 s - > R x H a l f C p l t C a l l b a c k   =   H A L _ I 2 S _ R x H a l f C p l t C a l l b a c k ;                 / *   L e g a c y   w e a k   R x H a l f C p l t C a l l b a c k       * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ E R R O R _ C B _ I D   :  
                 h i 2 s - > E r r o r C a l l b a c k   =   H A L _ I 2 S _ E r r o r C a l l b a c k ;                                     / *   L e g a c y   w e a k   E r r o r C a l l b a c k                 * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ M S P I N I T _ C B _ I D   :  
                 h i 2 s - > M s p I n i t C a l l b a c k   =   H A L _ I 2 S _ M s p I n i t ;                                             / *   L e g a c y   w e a k   M s p I n i t                             * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ M S P D E I N I T _ C B _ I D   :  
                 h i 2 s - > M s p D e I n i t C a l l b a c k   =   H A L _ I 2 S _ M s p D e I n i t ;                                     / *   L e g a c y   w e a k   M s p D e I n i t                         * /  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ I N V A L I D _ C A L L B A C K ) ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( H A L _ I 2 S _ S T A T E _ R E S E T   = =   h i 2 s - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ I 2 S _ M S P I N I T _ C B _ I D   :  
                 h i 2 s - > M s p I n i t C a l l b a c k   =   H A L _ I 2 S _ M s p I n i t ;                                             / *   L e g a c y   w e a k   M s p I n i t                             * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 S _ M S P D E I N I T _ C B _ I D   :  
                 h i 2 s - > M s p D e I n i t C a l l b a c k   =   H A L _ I 2 S _ M s p D e I n i t ;                                     / *   L e g a c y   w e a k   M s p D e I n i t                         * /  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ I N V A L I D _ C A L L B A C K ) ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ I N V A L I D _ C A L L B A C K ) ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h i 2 s ) ;  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I O   o p e r a t i o n   f u n c t i o n s  
     *     @ b r i e f   D a t a   t r a n s f e r s   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   m a n a g e   t h e   I 2 S   d a t a  
         t r a n s f e r s .  
  
         ( # )   T h e r e   a r e   t w o   m o d e s   o f   t r a n s f e r :  
               ( + + )   B l o c k i n g   m o d e   :   T h e   c o m m u n i c a t i o n   i s   p e r f o r m e d   i n   t h e   p o l l i n g   m o d e .  
                         T h e   s t a t u s   o f   a l l   d a t a   p r o c e s s i n g   i s   r e t u r n e d   b y   t h e   s a m e   f u n c t i o n  
                         a f t e r   f i n i s h i n g   t r a n s f e r .  
               ( + + )   N o - B l o c k i n g   m o d e   :   T h e   c o m m u n i c a t i o n   i s   p e r f o r m e d   u s i n g   I n t e r r u p t s  
                         o r   D M A .   T h e s e   f u n c t i o n s   r e t u r n   t h e   s t a t u s   o f   t h e   t r a n s f e r   s t a r t u p .  
                         T h e   e n d   o f   t h e   d a t a   p r o c e s s i n g   w i l l   b e   i n d i c a t e d   t h r o u g h   t h e  
                         d e d i c a t e d   I 2 S   I R Q   w h e n   u s i n g   I n t e r r u p t   m o d e   o r   t h e   D M A   I R Q   w h e n  
                         u s i n g   D M A   m o d e .  
  
         ( # )   B l o c k i n g   m o d e   f u n c t i o n s   a r e   :  
                 ( + + )   H A L _ I 2 S _ T r a n s m i t ( )  
                 ( + + )   H A L _ I 2 S _ R e c e i v e ( )  
  
         ( # )   N o - B l o c k i n g   m o d e   f u n c t i o n s   w i t h   I n t e r r u p t   a r e   :  
                 ( + + )   H A L _ I 2 S _ T r a n s m i t _ I T ( )  
                 ( + + )   H A L _ I 2 S _ R e c e i v e _ I T ( )  
  
         ( # )   N o - B l o c k i n g   m o d e   f u n c t i o n s   w i t h   D M A   a r e   :  
                 ( + + )   H A L _ I 2 S _ T r a n s m i t _ D M A ( )  
                 ( + + )   H A L _ I 2 S _ R e c e i v e _ D M A ( )  
  
         ( # )   A   s e t   o f   T r a n s f e r   C o m p l e t e   C a l l b a c k s   a r e   p r o v i d e d   i n   n o n   B l o c k i n g   m o d e :  
                 ( + + )   H A L _ I 2 S _ T x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I 2 S _ R x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I 2 S _ E r r o r C a l l b a c k ( )  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     T r a n s m i t   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ p a r a m     p D a t a   a   1 6 - b i t   p o i n t e r   t o   d a t a   b u f f e r .  
     *   @ p a r a m     S i z e   n u m b e r   o f   d a t a   s a m p l e   t o   b e   s e n t :  
     *   @ n o t e       W h e n   a   1 6 - b i t   d a t a   f r a m e   o r   a   1 6 - b i t   d a t a   f r a m e   e x t e n d e d   i s   s e l e c t e d   d u r i n g   t h e   I 2 S  
     *                   c o n f i g u r a t i o n   p h a s e ,   t h e   S i z e   p a r a m e t e r   m e a n s   t h e   n u m b e r   o f   1 6 - b i t   d a t a   l e n g t h  
     *                   i n   t h e   t r a n s a c t i o n   a n d   w h e n   a   2 4 - b i t   d a t a   f r a m e   o r   a   3 2 - b i t   d a t a   f r a m e   i s   s e l e c t e d  
     *                   t h e   S i z e   p a r a m e t e r   m e a n s   t h e   n u m b e r   o f   2 4 - b i t   o r   3 2 - b i t   d a t a   l e n g t h .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ n o t e       T h e   I 2 S   i s   k e p t   e n a b l e d   a t   t h e   e n d   o f   t r a n s a c t i o n   t o   a v o i d   t h e   c l o c k   d e - s y n c h r o n i z a t i o n  
     *                   b e t w e e n   M a s t e r   a n d   S l a v e ( e x a m p l e :   a u d i o   s t r e a m i n g ) .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ T r a n s m i t ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s ,   u i n t 1 6 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 3 2 _ t   t m p r e g _ c f g r ;  
  
     i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
     {  
         r e t u r n     H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 s ) ;  
  
     i f   ( h i 2 s - > S t a t e   ! =   H A L _ I 2 S _ S T A T E _ R E A D Y )  
     {  
         _ _ H A L _ U N L O C K ( h i 2 s ) ;  
         r e t u r n   H A L _ B U S Y ;  
     }  
  
     / *   S e t   s t a t e   a n d   r e s e t   e r r o r   c o d e   * /  
     h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ B U S Y _ T X ;  
     h i 2 s - > E r r o r C o d e   =   H A L _ I 2 S _ E R R O R _ N O N E ;  
     h i 2 s - > p T x B u f f P t r   =   p D a t a ;  
  
     t m p r e g _ c f g r   =   h i 2 s - > I n s t a n c e - > I 2 S C F G R   &   ( S P I _ I 2 S C F G R _ D A T L E N   |   S P I _ I 2 S C F G R _ C H L E N ) ;  
  
     i f   ( ( t m p r e g _ c f g r   = =   I 2 S _ D A T A F O R M A T _ 2 4 B )   | |   ( t m p r e g _ c f g r   = =   I 2 S _ D A T A F O R M A T _ 3 2 B ) )  
     {  
         h i 2 s - > T x X f e r S i z e   =   ( S i z e   < <   1 U ) ;  
         h i 2 s - > T x X f e r C o u n t   =   ( S i z e   < <   1 U ) ;  
     }  
     e l s e  
     {  
         h i 2 s - > T x X f e r S i z e   =   S i z e ;  
         h i 2 s - > T x X f e r C o u n t   =   S i z e ;  
     }  
  
     t m p r e g _ c f g r   =   h i 2 s - > I n s t a n c e - > I 2 S C F G R ;  
  
     / *   C h e c k   i f   t h e   I 2 S   i s   a l r e a d y   e n a b l e d   * /  
     i f   ( ( h i 2 s - > I n s t a n c e - > I 2 S C F G R   &   S P I _ I 2 S C F G R _ I 2 S E )   ! =   S P I _ I 2 S C F G R _ I 2 S E )  
     {  
         / *   E n a b l e   I 2 S   p e r i p h e r a l   * /  
         _ _ H A L _ I 2 S _ E N A B L E ( h i 2 s ) ;  
     }  
  
     / *   W a i t   u n t i l   T X E   f l a g   i s   s e t   * /  
     i f   ( I 2 S _ W a i t F l a g S t a t e U n t i l T i m e o u t ( h i 2 s ,   I 2 S _ F L A G _ T X E ,   S E T ,   T i m e o u t )   ! =   H A L _ O K )  
     {  
         / *   S e t   t h e   e r r o r   c o d e   * /  
         S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ T I M E O U T ) ;  
         h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
         _ _ H A L _ U N L O C K ( h i 2 s ) ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     w h i l e   ( h i 2 s - > T x X f e r C o u n t   >   0 U )  
     {  
         h i 2 s - > I n s t a n c e - > D R   =   ( * h i 2 s - > p T x B u f f P t r ) ;  
         h i 2 s - > p T x B u f f P t r + + ;  
         h i 2 s - > T x X f e r C o u n t - - ;  
  
         / *   W a i t   u n t i l   T X E   f l a g   i s   s e t   * /  
         i f   ( I 2 S _ W a i t F l a g S t a t e U n t i l T i m e o u t ( h i 2 s ,   I 2 S _ F L A G _ T X E ,   S E T ,   T i m e o u t )   ! =   H A L _ O K )  
         {  
             / *   S e t   t h e   e r r o r   c o d e   * /  
             S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ T I M E O U T ) ;  
             h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
             _ _ H A L _ U N L O C K ( h i 2 s ) ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C h e c k   i f   a n   u n d e r r u n   o c c u r s   * /  
         i f   ( _ _ H A L _ I 2 S _ G E T _ F L A G ( h i 2 s ,   I 2 S _ F L A G _ U D R )   = =   S E T )  
         {  
             / *   C l e a r   u n d e r r u n   f l a g   * /  
             _ _ H A L _ I 2 S _ C L E A R _ U D R F L A G ( h i 2 s ) ;  
  
             / *   S e t   t h e   e r r o r   c o d e   * /  
             S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ U D R ) ;  
         }  
     }  
  
     / *   C h e c k   i f   S l a v e   m o d e   i s   s e l e c t e d   * /  
     i f   ( ( ( t m p r e g _ c f g r   &   S P I _ I 2 S C F G R _ I 2 S C F G )   = =   I 2 S _ M O D E _ S L A V E _ T X )  
             | |   ( ( t m p r e g _ c f g r   &   S P I _ I 2 S C F G R _ I 2 S C F G )   = =   I 2 S _ M O D E _ S L A V E _ R X ) )  
     {  
         / *   W a i t   u n t i l   B u s y   f l a g   i s   r e s e t   * /  
         i f   ( I 2 S _ W a i t F l a g S t a t e U n t i l T i m e o u t ( h i 2 s ,   I 2 S _ F L A G _ B S Y ,   R E S E T ,   T i m e o u t )   ! =   H A L _ O K )  
         {  
             / *   S e t   t h e   e r r o r   c o d e   * /  
             S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ T I M E O U T ) ;  
             h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
             _ _ H A L _ U N L O C K ( h i 2 s ) ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
  
     h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
     _ _ H A L _ U N L O C K ( h i 2 s ) ;  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e c e i v e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ p a r a m     p D a t a   a   1 6 - b i t   p o i n t e r   t o   d a t a   b u f f e r .  
     *   @ p a r a m     S i z e   n u m b e r   o f   d a t a   s a m p l e   t o   b e   s e n t :  
     *   @ n o t e       W h e n   a   1 6 - b i t   d a t a   f r a m e   o r   a   1 6 - b i t   d a t a   f r a m e   e x t e n d e d   i s   s e l e c t e d   d u r i n g   t h e   I 2 S  
     *                   c o n f i g u r a t i o n   p h a s e ,   t h e   S i z e   p a r a m e t e r   m e a n s   t h e   n u m b e r   o f   1 6 - b i t   d a t a   l e n g t h  
     *                   i n   t h e   t r a n s a c t i o n   a n d   w h e n   a   2 4 - b i t   d a t a   f r a m e   o r   a   3 2 - b i t   d a t a   f r a m e   i s   s e l e c t e d  
     *                   t h e   S i z e   p a r a m e t e r   m e a n s   t h e   n u m b e r   o f   2 4 - b i t   o r   3 2 - b i t   d a t a   l e n g t h .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ n o t e       T h e   I 2 S   i s   k e p t   e n a b l e d   a t   t h e   e n d   o f   t r a n s a c t i o n   t o   a v o i d   t h e   c l o c k   d e - s y n c h r o n i z a t i o n  
     *                   b e t w e e n   M a s t e r   a n d   S l a v e ( e x a m p l e :   a u d i o   s t r e a m i n g ) .  
     *   @ n o t e       I n   I 2 S   M a s t e r   R e c e i v e r   m o d e ,   j u s t   a f t e r   e n a b l i n g   t h e   p e r i p h e r a l   t h e   c l o c k   w i l l   b e   g e n e r a t e  
     *                   i n   c o n t i n u o u s   w a y   a n d   a s   t h e   I 2 S   i s   n o t   d i s a b l e d   a t   t h e   e n d   o f   t h e   I 2 S   t r a n s a c t i o n .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ R e c e i v e ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s ,   u i n t 1 6 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 3 2 _ t   t m p r e g _ c f g r ;  
  
     i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
     {  
         r e t u r n     H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 s ) ;  
  
     i f   ( h i 2 s - > S t a t e   ! =   H A L _ I 2 S _ S T A T E _ R E A D Y )  
     {  
         _ _ H A L _ U N L O C K ( h i 2 s ) ;  
         r e t u r n   H A L _ B U S Y ;  
     }  
  
     / *   S e t   s t a t e   a n d   r e s e t   e r r o r   c o d e   * /  
     h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ B U S Y _ R X ;  
     h i 2 s - > E r r o r C o d e   =   H A L _ I 2 S _ E R R O R _ N O N E ;  
     h i 2 s - > p R x B u f f P t r   =   p D a t a ;  
  
     t m p r e g _ c f g r   =   h i 2 s - > I n s t a n c e - > I 2 S C F G R   &   ( S P I _ I 2 S C F G R _ D A T L E N   |   S P I _ I 2 S C F G R _ C H L E N ) ;  
  
     i f   ( ( t m p r e g _ c f g r   = =   I 2 S _ D A T A F O R M A T _ 2 4 B )   | |   ( t m p r e g _ c f g r   = =   I 2 S _ D A T A F O R M A T _ 3 2 B ) )  
     {  
         h i 2 s - > R x X f e r S i z e   =   ( S i z e   < <   1 U ) ;  
         h i 2 s - > R x X f e r C o u n t   =   ( S i z e   < <   1 U ) ;  
     }  
     e l s e  
     {  
         h i 2 s - > R x X f e r S i z e   =   S i z e ;  
         h i 2 s - > R x X f e r C o u n t   =   S i z e ;  
     }  
  
     / *   C h e c k   i f   t h e   I 2 S   i s   a l r e a d y   e n a b l e d   * /  
     i f   ( ( h i 2 s - > I n s t a n c e - > I 2 S C F G R   &   S P I _ I 2 S C F G R _ I 2 S E )   ! =   S P I _ I 2 S C F G R _ I 2 S E )  
     {  
         / *   E n a b l e   I 2 S   p e r i p h e r a l   * /  
         _ _ H A L _ I 2 S _ E N A B L E ( h i 2 s ) ;  
     }  
  
     / *   C h e c k   i f   M a s t e r   R e c e i v e r   m o d e   i s   s e l e c t e d   * /  
     i f   ( ( h i 2 s - > I n s t a n c e - > I 2 S C F G R   &   S P I _ I 2 S C F G R _ I 2 S C F G )   = =   I 2 S _ M O D E _ M A S T E R _ R X )  
     {  
         / *   C l e a r   t h e   O v e r r u n   F l a g   b y   a   r e a d   o p e r a t i o n   o n   t h e   S P I _ D R   r e g i s t e r   f o l l o w e d   b y   a   r e a d  
         a c c e s s   t o   t h e   S P I _ S R   r e g i s t e r .   * /  
         _ _ H A L _ I 2 S _ C L E A R _ O V R F L A G ( h i 2 s ) ;  
     }  
  
     / *   R e c e i v e   d a t a   * /  
     w h i l e   ( h i 2 s - > R x X f e r C o u n t   >   0 U )  
     {  
         / *   W a i t   u n t i l   R X N E   f l a g   i s   s e t   * /  
         i f   ( I 2 S _ W a i t F l a g S t a t e U n t i l T i m e o u t ( h i 2 s ,   I 2 S _ F L A G _ R X N E ,   S E T ,   T i m e o u t )   ! =   H A L _ O K )  
         {  
             / *   S e t   t h e   e r r o r   c o d e   * /  
             S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ T I M E O U T ) ;  
             h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
             _ _ H A L _ U N L O C K ( h i 2 s ) ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         ( * h i 2 s - > p R x B u f f P t r )   =   ( u i n t 1 6 _ t ) h i 2 s - > I n s t a n c e - > D R ;  
         h i 2 s - > p R x B u f f P t r + + ;  
         h i 2 s - > R x X f e r C o u n t - - ;  
  
         / *   C h e c k   i f   a n   o v e r r u n   o c c u r s   * /  
         i f   ( _ _ H A L _ I 2 S _ G E T _ F L A G ( h i 2 s ,   I 2 S _ F L A G _ O V R )   = =   S E T )  
         {  
             / *   C l e a r   o v e r r u n   f l a g   * /  
             _ _ H A L _ I 2 S _ C L E A R _ O V R F L A G ( h i 2 s ) ;  
  
             / *   S e t   t h e   e r r o r   c o d e   * /  
             S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ O V R ) ;  
         }  
     }  
  
     h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
     _ _ H A L _ U N L O C K ( h i 2 s ) ;  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T r a n s m i t   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ p a r a m     p D a t a   a   1 6 - b i t   p o i n t e r   t o   d a t a   b u f f e r .  
     *   @ p a r a m     S i z e   n u m b e r   o f   d a t a   s a m p l e   t o   b e   s e n t :  
     *   @ n o t e       W h e n   a   1 6 - b i t   d a t a   f r a m e   o r   a   1 6 - b i t   d a t a   f r a m e   e x t e n d e d   i s   s e l e c t e d   d u r i n g   t h e   I 2 S  
     *                   c o n f i g u r a t i o n   p h a s e ,   t h e   S i z e   p a r a m e t e r   m e a n s   t h e   n u m b e r   o f   1 6 - b i t   d a t a   l e n g t h  
     *                   i n   t h e   t r a n s a c t i o n   a n d   w h e n   a   2 4 - b i t   d a t a   f r a m e   o r   a   3 2 - b i t   d a t a   f r a m e   i s   s e l e c t e d  
     *                   t h e   S i z e   p a r a m e t e r   m e a n s   t h e   n u m b e r   o f   2 4 - b i t   o r   3 2 - b i t   d a t a   l e n g t h .  
     *   @ n o t e       T h e   I 2 S   i s   k e p t   e n a b l e d   a t   t h e   e n d   o f   t r a n s a c t i o n   t o   a v o i d   t h e   c l o c k   d e - s y n c h r o n i z a t i o n  
     *                   b e t w e e n   M a s t e r   a n d   S l a v e ( e x a m p l e :   a u d i o   s t r e a m i n g ) .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ T r a n s m i t _ I T ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s ,   u i n t 1 6 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     u i n t 3 2 _ t   t m p r e g _ c f g r ;  
  
     i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
     {  
         r e t u r n     H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 s ) ;  
  
     i f   ( h i 2 s - > S t a t e   ! =   H A L _ I 2 S _ S T A T E _ R E A D Y )  
     {  
         _ _ H A L _ U N L O C K ( h i 2 s ) ;  
         r e t u r n   H A L _ B U S Y ;  
     }  
  
     / *   S e t   s t a t e   a n d   r e s e t   e r r o r   c o d e   * /  
     h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ B U S Y _ T X ;  
     h i 2 s - > E r r o r C o d e   =   H A L _ I 2 S _ E R R O R _ N O N E ;  
     h i 2 s - > p T x B u f f P t r   =   p D a t a ;  
  
     t m p r e g _ c f g r   =   h i 2 s - > I n s t a n c e - > I 2 S C F G R   &   ( S P I _ I 2 S C F G R _ D A T L E N   |   S P I _ I 2 S C F G R _ C H L E N ) ;  
  
     i f   ( ( t m p r e g _ c f g r   = =   I 2 S _ D A T A F O R M A T _ 2 4 B )   | |   ( t m p r e g _ c f g r   = =   I 2 S _ D A T A F O R M A T _ 3 2 B ) )  
     {  
         h i 2 s - > T x X f e r S i z e   =   ( S i z e   < <   1 U ) ;  
         h i 2 s - > T x X f e r C o u n t   =   ( S i z e   < <   1 U ) ;  
     }  
     e l s e  
     {  
         h i 2 s - > T x X f e r S i z e   =   S i z e ;  
         h i 2 s - > T x X f e r C o u n t   =   S i z e ;  
     }  
  
     / *   E n a b l e   T X E   a n d   E R R   i n t e r r u p t   * /  
     _ _ H A L _ I 2 S _ E N A B L E _ I T ( h i 2 s ,   ( I 2 S _ I T _ T X E   |   I 2 S _ I T _ E R R ) ) ;  
  
     / *   C h e c k   i f   t h e   I 2 S   i s   a l r e a d y   e n a b l e d   * /  
     i f   ( ( h i 2 s - > I n s t a n c e - > I 2 S C F G R   &   S P I _ I 2 S C F G R _ I 2 S E )   ! =   S P I _ I 2 S C F G R _ I 2 S E )  
     {  
         / *   E n a b l e   I 2 S   p e r i p h e r a l   * /  
         _ _ H A L _ I 2 S _ E N A B L E ( h i 2 s ) ;  
     }  
  
     _ _ H A L _ U N L O C K ( h i 2 s ) ;  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ p a r a m     p D a t a   a   1 6 - b i t   p o i n t e r   t o   t h e   R e c e i v e   d a t a   b u f f e r .  
     *   @ p a r a m     S i z e   n u m b e r   o f   d a t a   s a m p l e   t o   b e   s e n t :  
     *   @ n o t e       W h e n   a   1 6 - b i t   d a t a   f r a m e   o r   a   1 6 - b i t   d a t a   f r a m e   e x t e n d e d   i s   s e l e c t e d   d u r i n g   t h e   I 2 S  
     *                   c o n f i g u r a t i o n   p h a s e ,   t h e   S i z e   p a r a m e t e r   m e a n s   t h e   n u m b e r   o f   1 6 - b i t   d a t a   l e n g t h  
     *                   i n   t h e   t r a n s a c t i o n   a n d   w h e n   a   2 4 - b i t   d a t a   f r a m e   o r   a   3 2 - b i t   d a t a   f r a m e   i s   s e l e c t e d  
     *                   t h e   S i z e   p a r a m e t e r   m e a n s   t h e   n u m b e r   o f   2 4 - b i t   o r   3 2 - b i t   d a t a   l e n g t h .  
     *   @ n o t e       T h e   I 2 S   i s   k e p t   e n a b l e d   a t   t h e   e n d   o f   t r a n s a c t i o n   t o   a v o i d   t h e   c l o c k   d e - s y n c h r o n i z a t i o n  
     *                   b e t w e e n   M a s t e r   a n d   S l a v e ( e x a m p l e :   a u d i o   s t r e a m i n g ) .  
     *   @ n o t e       I t   i s   r e c o m m e n d e d   t o   u s e   D M A   f o r   t h e   I 2 S   r e c e i v e r   t o   a v o i d   d e - s y n c h r o n i z a t i o n  
     *   b e t w e e n   M a s t e r   a n d   S l a v e   o t h e r w i s e   t h e   I 2 S   i n t e r r u p t   s h o u l d   b e   o p t i m i z e d .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ R e c e i v e _ I T ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s ,   u i n t 1 6 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     u i n t 3 2 _ t   t m p r e g _ c f g r ;  
  
     i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
     {  
         r e t u r n     H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 s ) ;  
  
     i f   ( h i 2 s - > S t a t e   ! =   H A L _ I 2 S _ S T A T E _ R E A D Y )  
     {  
         _ _ H A L _ U N L O C K ( h i 2 s ) ;  
         r e t u r n   H A L _ B U S Y ;  
     }  
  
     / *   S e t   s t a t e   a n d   r e s e t   e r r o r   c o d e   * /  
     h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ B U S Y _ R X ;  
     h i 2 s - > E r r o r C o d e   =   H A L _ I 2 S _ E R R O R _ N O N E ;  
     h i 2 s - > p R x B u f f P t r   =   p D a t a ;  
  
     t m p r e g _ c f g r   =   h i 2 s - > I n s t a n c e - > I 2 S C F G R   &   ( S P I _ I 2 S C F G R _ D A T L E N   |   S P I _ I 2 S C F G R _ C H L E N ) ;  
  
     i f   ( ( t m p r e g _ c f g r   = =   I 2 S _ D A T A F O R M A T _ 2 4 B )   | |   ( t m p r e g _ c f g r   = =   I 2 S _ D A T A F O R M A T _ 3 2 B ) )  
     {  
         h i 2 s - > R x X f e r S i z e   =   ( S i z e   < <   1 U ) ;  
         h i 2 s - > R x X f e r C o u n t   =   ( S i z e   < <   1 U ) ;  
     }  
     e l s e  
     {  
         h i 2 s - > R x X f e r S i z e   =   S i z e ;  
         h i 2 s - > R x X f e r C o u n t   =   S i z e ;  
     }  
  
     / *   E n a b l e   R X N E   a n d   E R R   i n t e r r u p t   * /  
     _ _ H A L _ I 2 S _ E N A B L E _ I T ( h i 2 s ,   ( I 2 S _ I T _ R X N E   |   I 2 S _ I T _ E R R ) ) ;  
  
     / *   C h e c k   i f   t h e   I 2 S   i s   a l r e a d y   e n a b l e d   * /  
     i f   ( ( h i 2 s - > I n s t a n c e - > I 2 S C F G R   &   S P I _ I 2 S C F G R _ I 2 S E )   ! =   S P I _ I 2 S C F G R _ I 2 S E )  
     {  
         / *   E n a b l e   I 2 S   p e r i p h e r a l   * /  
         _ _ H A L _ I 2 S _ E N A B L E ( h i 2 s ) ;  
     }  
  
     _ _ H A L _ U N L O C K ( h i 2 s ) ;  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T r a n s m i t   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ p a r a m     p D a t a   a   1 6 - b i t   p o i n t e r   t o   t h e   T r a n s m i t   d a t a   b u f f e r .  
     *   @ p a r a m     S i z e   n u m b e r   o f   d a t a   s a m p l e   t o   b e   s e n t :  
     *   @ n o t e       W h e n   a   1 6 - b i t   d a t a   f r a m e   o r   a   1 6 - b i t   d a t a   f r a m e   e x t e n d e d   i s   s e l e c t e d   d u r i n g   t h e   I 2 S  
     *                   c o n f i g u r a t i o n   p h a s e ,   t h e   S i z e   p a r a m e t e r   m e a n s   t h e   n u m b e r   o f   1 6 - b i t   d a t a   l e n g t h  
     *                   i n   t h e   t r a n s a c t i o n   a n d   w h e n   a   2 4 - b i t   d a t a   f r a m e   o r   a   3 2 - b i t   d a t a   f r a m e   i s   s e l e c t e d  
     *                   t h e   S i z e   p a r a m e t e r   m e a n s   t h e   n u m b e r   o f   2 4 - b i t   o r   3 2 - b i t   d a t a   l e n g t h .  
     *   @ n o t e       T h e   I 2 S   i s   k e p t   e n a b l e d   a t   t h e   e n d   o f   t r a n s a c t i o n   t o   a v o i d   t h e   c l o c k   d e - s y n c h r o n i z a t i o n  
     *                   b e t w e e n   M a s t e r   a n d   S l a v e ( e x a m p l e :   a u d i o   s t r e a m i n g ) .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ T r a n s m i t _ D M A ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s ,   u i n t 1 6 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     u i n t 3 2 _ t   t m p r e g _ c f g r ;  
  
     i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
     {  
         r e t u r n     H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 s ) ;  
  
     i f   ( h i 2 s - > S t a t e   ! =   H A L _ I 2 S _ S T A T E _ R E A D Y )  
     {  
         _ _ H A L _ U N L O C K ( h i 2 s ) ;  
         r e t u r n   H A L _ B U S Y ;  
     }  
  
     / *   S e t   s t a t e   a n d   r e s e t   e r r o r   c o d e   * /  
     h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ B U S Y _ T X ;  
     h i 2 s - > E r r o r C o d e   =   H A L _ I 2 S _ E R R O R _ N O N E ;  
     h i 2 s - > p T x B u f f P t r   =   p D a t a ;  
  
     t m p r e g _ c f g r   =   h i 2 s - > I n s t a n c e - > I 2 S C F G R   &   ( S P I _ I 2 S C F G R _ D A T L E N   |   S P I _ I 2 S C F G R _ C H L E N ) ;  
  
     i f   ( ( t m p r e g _ c f g r   = =   I 2 S _ D A T A F O R M A T _ 2 4 B )   | |   ( t m p r e g _ c f g r   = =   I 2 S _ D A T A F O R M A T _ 3 2 B ) )  
     {  
         h i 2 s - > T x X f e r S i z e   =   ( S i z e   < <   1 U ) ;  
         h i 2 s - > T x X f e r C o u n t   =   ( S i z e   < <   1 U ) ;  
     }  
     e l s e  
     {  
         h i 2 s - > T x X f e r S i z e   =   S i z e ;  
         h i 2 s - > T x X f e r C o u n t   =   S i z e ;  
     }  
  
     / *   S e t   t h e   I 2 S   T x   D M A   H a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
     h i 2 s - > h d m a t x - > X f e r H a l f C p l t C a l l b a c k   =   I 2 S _ D M A T x H a l f C p l t ;  
  
     / *   S e t   t h e   I 2 S   T x   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
     h i 2 s - > h d m a t x - > X f e r C p l t C a l l b a c k   =   I 2 S _ D M A T x C p l t ;  
  
     / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
     h i 2 s - > h d m a t x - > X f e r E r r o r C a l l b a c k   =   I 2 S _ D M A E r r o r ;  
  
     / *   E n a b l e   t h e   T x   D M A   S t r e a m / C h a n n e l   * /  
     i f   ( H A L _ O K   ! =   H A L _ D M A _ S t a r t _ I T ( h i 2 s - > h d m a t x ,  
                                                                   ( u i n t 3 2 _ t ) h i 2 s - > p T x B u f f P t r ,  
                                                                   ( u i n t 3 2 _ t ) & h i 2 s - > I n s t a n c e - > D R ,  
                                                                   h i 2 s - > T x X f e r S i z e ) )  
     {  
         / *   U p d a t e   S P I   e r r o r   c o d e   * /  
         S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ D M A ) ;  
         h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
  
         _ _ H A L _ U N L O C K ( h i 2 s ) ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   i f   t h e   I 2 S   i s   a l r e a d y   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ C L R ( h i 2 s - > I n s t a n c e - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ I 2 S E ) )  
     {  
         / *   E n a b l e   I 2 S   p e r i p h e r a l   * /  
         _ _ H A L _ I 2 S _ E N A B L E ( h i 2 s ) ;  
     }  
  
     / *   C h e c k   i f   t h e   I 2 S   T x   r e q u e s t   i s   a l r e a d y   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ C L R ( h i 2 s - > I n s t a n c e - > C R 2 ,   S P I _ C R 2 _ T X D M A E N ) )  
     {  
         / *   E n a b l e   T x   D M A   R e q u e s t   * /  
         S E T _ B I T ( h i 2 s - > I n s t a n c e - > C R 2 ,   S P I _ C R 2 _ T X D M A E N ) ;  
     }  
  
     _ _ H A L _ U N L O C K ( h i 2 s ) ;  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ p a r a m     p D a t a   a   1 6 - b i t   p o i n t e r   t o   t h e   R e c e i v e   d a t a   b u f f e r .  
     *   @ p a r a m     S i z e   n u m b e r   o f   d a t a   s a m p l e   t o   b e   s e n t :  
     *   @ n o t e       W h e n   a   1 6 - b i t   d a t a   f r a m e   o r   a   1 6 - b i t   d a t a   f r a m e   e x t e n d e d   i s   s e l e c t e d   d u r i n g   t h e   I 2 S  
     *                   c o n f i g u r a t i o n   p h a s e ,   t h e   S i z e   p a r a m e t e r   m e a n s   t h e   n u m b e r   o f   1 6 - b i t   d a t a   l e n g t h  
     *                   i n   t h e   t r a n s a c t i o n   a n d   w h e n   a   2 4 - b i t   d a t a   f r a m e   o r   a   3 2 - b i t   d a t a   f r a m e   i s   s e l e c t e d  
     *                   t h e   S i z e   p a r a m e t e r   m e a n s   t h e   n u m b e r   o f   2 4 - b i t   o r   3 2 - b i t   d a t a   l e n g t h .  
     *   @ n o t e       T h e   I 2 S   i s   k e p t   e n a b l e d   a t   t h e   e n d   o f   t r a n s a c t i o n   t o   a v o i d   t h e   c l o c k   d e - s y n c h r o n i z a t i o n  
     *                   b e t w e e n   M a s t e r   a n d   S l a v e ( e x a m p l e :   a u d i o   s t r e a m i n g ) .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ R e c e i v e _ D M A ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s ,   u i n t 1 6 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     u i n t 3 2 _ t   t m p r e g _ c f g r ;  
  
     i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
     {  
         r e t u r n     H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 s ) ;  
  
     i f   ( h i 2 s - > S t a t e   ! =   H A L _ I 2 S _ S T A T E _ R E A D Y )  
     {  
         _ _ H A L _ U N L O C K ( h i 2 s ) ;  
         r e t u r n   H A L _ B U S Y ;  
     }  
  
     / *   S e t   s t a t e   a n d   r e s e t   e r r o r   c o d e   * /  
     h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ B U S Y _ R X ;  
     h i 2 s - > E r r o r C o d e   =   H A L _ I 2 S _ E R R O R _ N O N E ;  
     h i 2 s - > p R x B u f f P t r   =   p D a t a ;  
  
     t m p r e g _ c f g r   =   h i 2 s - > I n s t a n c e - > I 2 S C F G R   &   ( S P I _ I 2 S C F G R _ D A T L E N   |   S P I _ I 2 S C F G R _ C H L E N ) ;  
  
     i f   ( ( t m p r e g _ c f g r   = =   I 2 S _ D A T A F O R M A T _ 2 4 B )   | |   ( t m p r e g _ c f g r   = =   I 2 S _ D A T A F O R M A T _ 3 2 B ) )  
     {  
         h i 2 s - > R x X f e r S i z e   =   ( S i z e   < <   1 U ) ;  
         h i 2 s - > R x X f e r C o u n t   =   ( S i z e   < <   1 U ) ;  
     }  
     e l s e  
     {  
         h i 2 s - > R x X f e r S i z e   =   S i z e ;  
         h i 2 s - > R x X f e r C o u n t   =   S i z e ;  
     }  
  
     / *   S e t   t h e   I 2 S   R x   D M A   H a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
     h i 2 s - > h d m a r x - > X f e r H a l f C p l t C a l l b a c k   =   I 2 S _ D M A R x H a l f C p l t ;  
  
     / *   S e t   t h e   I 2 S   R x   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
     h i 2 s - > h d m a r x - > X f e r C p l t C a l l b a c k   =   I 2 S _ D M A R x C p l t ;  
  
     / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
     h i 2 s - > h d m a r x - > X f e r E r r o r C a l l b a c k   =   I 2 S _ D M A E r r o r ;  
  
     / *   C h e c k   i f   M a s t e r   R e c e i v e r   m o d e   i s   s e l e c t e d   * /  
     i f   ( ( h i 2 s - > I n s t a n c e - > I 2 S C F G R   &   S P I _ I 2 S C F G R _ I 2 S C F G )   = =   I 2 S _ M O D E _ M A S T E R _ R X )  
     {  
         / *   C l e a r   t h e   O v e r r u n   F l a g   b y   a   r e a d   o p e r a t i o n   t o   t h e   S P I _ D R   r e g i s t e r   f o l l o w e d   b y   a   r e a d  
         a c c e s s   t o   t h e   S P I _ S R   r e g i s t e r .   * /  
         _ _ H A L _ I 2 S _ C L E A R _ O V R F L A G ( h i 2 s ) ;  
     }  
  
     / *   E n a b l e   t h e   R x   D M A   S t r e a m / C h a n n e l   * /  
     i f   ( H A L _ O K   ! =   H A L _ D M A _ S t a r t _ I T ( h i 2 s - > h d m a r x ,   ( u i n t 3 2 _ t ) & h i 2 s - > I n s t a n c e - > D R ,   ( u i n t 3 2 _ t ) h i 2 s - > p R x B u f f P t r ,  
                                                                   h i 2 s - > R x X f e r S i z e ) )  
     {  
         / *   U p d a t e   S P I   e r r o r   c o d e   * /  
         S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ D M A ) ;  
         h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
  
         _ _ H A L _ U N L O C K ( h i 2 s ) ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   i f   t h e   I 2 S   i s   a l r e a d y   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ C L R ( h i 2 s - > I n s t a n c e - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ I 2 S E ) )  
     {  
         / *   E n a b l e   I 2 S   p e r i p h e r a l   * /  
         _ _ H A L _ I 2 S _ E N A B L E ( h i 2 s ) ;  
     }  
  
     / *   C h e c k   i f   t h e   I 2 S   R x   r e q u e s t   i s   a l r e a d y   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ C L R ( h i 2 s - > I n s t a n c e - > C R 2 ,   S P I _ C R 2 _ R X D M A E N ) )  
     {  
         / *   E n a b l e   R x   D M A   R e q u e s t   * /  
         S E T _ B I T ( h i 2 s - > I n s t a n c e - > C R 2 ,   S P I _ C R 2 _ R X D M A E N ) ;  
     }  
  
     _ _ H A L _ U N L O C K ( h i 2 s ) ;  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     P a u s e s   t h e   a u d i o   D M A   S t r e a m / C h a n n e l   p l a y i n g   f r o m   t h e   M e d i a .  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ D M A P a u s e ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 s ) ;  
  
     i f   ( h i 2 s - > S t a t e   = =   H A L _ I 2 S _ S T A T E _ B U S Y _ T X )  
     {  
         / *   D i s a b l e   t h e   I 2 S   D M A   T x   r e q u e s t   * /  
         C L E A R _ B I T ( h i 2 s - > I n s t a n c e - > C R 2 ,   S P I _ C R 2 _ T X D M A E N ) ;  
     }  
     e l s e   i f   ( h i 2 s - > S t a t e   = =   H A L _ I 2 S _ S T A T E _ B U S Y _ R X )  
     {  
         / *   D i s a b l e   t h e   I 2 S   D M A   R x   r e q u e s t   * /  
         C L E A R _ B I T ( h i 2 s - > I n s t a n c e - > C R 2 ,   S P I _ C R 2 _ R X D M A E N ) ;  
     }  
     e l s e  
     {  
         / *   n o t h i n g   t o   d o   * /  
     }  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h i 2 s ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e s u m e s   t h e   a u d i o   D M A   S t r e a m / C h a n n e l   p l a y i n g   f r o m   t h e   M e d i a .  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ D M A R e s u m e ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 s ) ;  
  
     i f   ( h i 2 s - > S t a t e   = =   H A L _ I 2 S _ S T A T E _ B U S Y _ T X )  
     {  
         / *   E n a b l e   t h e   I 2 S   D M A   T x   r e q u e s t   * /  
         S E T _ B I T ( h i 2 s - > I n s t a n c e - > C R 2 ,   S P I _ C R 2 _ T X D M A E N ) ;  
     }  
     e l s e   i f   ( h i 2 s - > S t a t e   = =   H A L _ I 2 S _ S T A T E _ B U S Y _ R X )  
     {  
         / *   E n a b l e   t h e   I 2 S   D M A   R x   r e q u e s t   * /  
         S E T _ B I T ( h i 2 s - > I n s t a n c e - > C R 2 ,   S P I _ C R 2 _ R X D M A E N ) ;  
     }  
     e l s e  
     {  
         / *   n o t h i n g   t o   d o   * /  
     }  
  
     / *   I f   t h e   I 2 S   p e r i p h e r a l   i s   s t i l l   n o t   e n a b l e d ,   e n a b l e   i t   * /  
     i f   ( H A L _ I S _ B I T _ C L R ( h i 2 s - > I n s t a n c e - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ I 2 S E ) )  
     {  
         / *   E n a b l e   I 2 S   p e r i p h e r a l   * /  
         _ _ H A L _ I 2 S _ E N A B L E ( h i 2 s ) ;  
     }  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h i 2 s ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p s   t h e   a u d i o   D M A   S t r e a m / C h a n n e l   p l a y i n g   f r o m   t h e   M e d i a .  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 S _ D M A S t o p ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     H A L _ S t a t u s T y p e D e f   e r r o r c o d e   =   H A L _ O K ;  
     / *   T h e   L o c k   i s   n o t   i m p l e m e n t e d   o n   t h i s   A P I   t o   a l l o w   t h e   u s e r   a p p l i c a t i o n  
           t o   c a l l   t h e   H A L   S P I   A P I   u n d e r   c a l l b a c k s   H A L _ I 2 S _ T x C p l t C a l l b a c k ( )   o r   H A L _ I 2 S _ R x C p l t C a l l b a c k ( )  
           w h e n   c a l l i n g   H A L _ D M A _ A b o r t ( )   A P I   t h e   D M A   T X   o r   R X   T r a n s f e r   c o m p l e t e   i n t e r r u p t   i s   g e n e r a t e d  
           a n d   t h e   c o r r e s p o n d   c a l l   b a c k   i s   e x e c u t e d   H A L _ I 2 S _ T x C p l t C a l l b a c k ( )   o r   H A L _ I 2 S _ R x C p l t C a l l b a c k ( )  
           * /  
  
     i f   ( ( h i 2 s - > I n i t . M o d e   = =   I 2 S _ M O D E _ M A S T E R _ T X )   | |   ( h i 2 s - > I n i t . M o d e   = =   I 2 S _ M O D E _ S L A V E _ T X ) )  
     {  
         / *   A b o r t   t h e   I 2 S   D M A   t x   S t r e a m / C h a n n e l   * /  
         i f   ( h i 2 s - > h d m a t x   ! =   N U L L )  
         {  
             / *   D i s a b l e   t h e   I 2 S   D M A   t x   S t r e a m / C h a n n e l   * /  
             i f   ( H A L _ O K   ! =   H A L _ D M A _ A b o r t ( h i 2 s - > h d m a t x ) )  
             {  
                 S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ D M A ) ;  
                 e r r o r c o d e   =   H A L _ E R R O R ;  
             }  
         }  
  
         / *   W a i t   u n t i l   T X E   f l a g   i s   s e t   * /  
         i f   ( I 2 S _ W a i t F l a g S t a t e U n t i l T i m e o u t ( h i 2 s ,   I 2 S _ F L A G _ T X E ,   S E T ,   I 2 S _ T I M E O U T _ F L A G )   ! =   H A L _ O K )  
         {  
             / *   S e t   t h e   e r r o r   c o d e   * /  
             S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ T I M E O U T ) ;  
             h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
             e r r o r c o d e       =   H A L _ E R R O R ;  
         }  
  
         / *   W a i t   u n t i l   B S Y   f l a g   i s   R e s e t   * /  
         i f   ( I 2 S _ W a i t F l a g S t a t e U n t i l T i m e o u t ( h i 2 s ,   I 2 S _ F L A G _ B S Y ,   R E S E T ,   I 2 S _ T I M E O U T _ F L A G )   ! =   H A L _ O K )  
         {  
             / *   S e t   t h e   e r r o r   c o d e   * /  
             S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ T I M E O U T ) ;  
             h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
             e r r o r c o d e       =   H A L _ E R R O R ;  
         }  
  
         / *   D i s a b l e   I 2 S   p e r i p h e r a l   * /  
         _ _ H A L _ I 2 S _ D I S A B L E ( h i 2 s ) ;  
  
         / *   C l e a r   U D R   f l a g   * /  
         _ _ H A L _ I 2 S _ C L E A R _ U D R F L A G ( h i 2 s ) ;  
  
         / *   D i s a b l e   t h e   I 2 S   T x   D M A   r e q u e s t s   * /  
         C L E A R _ B I T ( h i 2 s - > I n s t a n c e - > C R 2 ,   S P I _ C R 2 _ T X D M A E N ) ;  
  
     }  
  
     e l s e   i f   ( ( h i 2 s - > I n i t . M o d e   = =   I 2 S _ M O D E _ M A S T E R _ R X )   | |   ( h i 2 s - > I n i t . M o d e   = =   I 2 S _ M O D E _ S L A V E _ R X ) )  
     {  
         / *   A b o r t   t h e   I 2 S   D M A   r x   S t r e a m / C h a n n e l   * /  
         i f   ( h i 2 s - > h d m a r x   ! =   N U L L )  
         {  
             / *   D i s a b l e   t h e   I 2 S   D M A   r x   S t r e a m / C h a n n e l   * /  
             i f   ( H A L _ O K   ! =   H A L _ D M A _ A b o r t ( h i 2 s - > h d m a r x ) )  
             {  
                 S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ D M A ) ;  
                 e r r o r c o d e   =   H A L _ E R R O R ;  
             }  
         }  
  
         / *   D i s a b l e   I 2 S   p e r i p h e r a l   * /  
         _ _ H A L _ I 2 S _ D I S A B L E ( h i 2 s ) ;  
  
         / *   C l e a r   O V R   f l a g   * /  
         _ _ H A L _ I 2 S _ C L E A R _ O V R F L A G ( h i 2 s ) ;  
  
         / *   D i s a b l e   t h e   I 2 S   R x   D M A   r e q u e s t   * /  
         C L E A R _ B I T ( h i 2 s - > I n s t a n c e - > C R 2 ,   S P I _ C R 2 _ R X D M A E N ) ;  
  
         i f   ( h i 2 s - > I n i t . M o d e   = =   I 2 S _ M O D E _ S L A V E _ R X )  
         {  
             / *   S e t   t h e   e r r o r   c o d e   * /  
             S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ B U S Y _ L I N E _ R X ) ;  
  
             / *   S e t   t h e   I 2 S   S t a t e   r e a d y   * /  
             h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
             e r r o r c o d e   =   H A L _ E R R O R ;  
         }  
         e l s e  
         {  
             / *   R e a d   D R   t o   F l u s h   R X   D a t a   * /  
             R E A D _ R E G ( ( h i 2 s - > I n s t a n c e ) - > D R ) ;  
         }  
     }  
  
     h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
  
     r e t u r n   e r r o r c o d e ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I 2 S   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ I 2 S _ I R Q H a n d l e r ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     u i n t 3 2 _ t   i t s o u r c e   =   h i 2 s - > I n s t a n c e - > C R 2 ;  
     u i n t 3 2 _ t   i t f l a g       =   h i 2 s - > I n s t a n c e - > S R ;  
  
     / *   I 2 S   i n   m o d e   R e c e i v e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( I 2 S _ C H E C K _ F L A G ( i t f l a g ,   I 2 S _ F L A G _ O V R )   = =   R E S E T )   & &  
             ( I 2 S _ C H E C K _ F L A G ( i t f l a g ,   I 2 S _ F L A G _ R X N E )   ! =   R E S E T )   & &   ( I 2 S _ C H E C K _ I T _ S O U R C E ( i t s o u r c e ,   I 2 S _ I T _ R X N E )   ! =   R E S E T ) )  
     {  
         I 2 S _ R e c e i v e _ I T ( h i 2 s ) ;  
         r e t u r n ;  
     }  
  
     / *   I 2 S   i n   m o d e   T r a m i t t e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( I 2 S _ C H E C K _ F L A G ( i t f l a g ,   I 2 S _ F L A G _ T X E )   ! =   R E S E T )   & &   ( I 2 S _ C H E C K _ I T _ S O U R C E ( i t s o u r c e ,   I 2 S _ I T _ T X E )   ! =   R E S E T ) )  
     {  
         I 2 S _ T r a n s m i t _ I T ( h i 2 s ) ;  
         r e t u r n ;  
     }  
  
     / *   I 2 S   i n t e r r u p t   e r r o r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( I 2 S _ C H E C K _ I T _ S O U R C E ( i t s o u r c e ,   I 2 S _ I T _ E R R )   ! =   R E S E T )  
     {  
         / *   I 2 S   O v e r r u n   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( I 2 S _ C H E C K _ F L A G ( i t f l a g ,   I 2 S _ F L A G _ O V R )   ! =   R E S E T )  
         {  
             / *   D i s a b l e   R X N E   a n d   E R R   i n t e r r u p t   * /  
             _ _ H A L _ I 2 S _ D I S A B L E _ I T ( h i 2 s ,   ( I 2 S _ I T _ R X N E   |   I 2 S _ I T _ E R R ) ) ;  
  
             / *   S e t   t h e   e r r o r   c o d e   a n d   e x e c u t e   e r r o r   c a l l b a c k * /  
             S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ O V R ) ;  
         }  
  
         / *   I 2 S   U n d e r r u n   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( I 2 S _ C H E C K _ F L A G ( i t f l a g ,   I 2 S _ F L A G _ U D R )   ! =   R E S E T )  
         {  
             / *   D i s a b l e   T X E   a n d   E R R   i n t e r r u p t   * /  
             _ _ H A L _ I 2 S _ D I S A B L E _ I T ( h i 2 s ,   ( I 2 S _ I T _ T X E   |   I 2 S _ I T _ E R R ) ) ;  
  
             / *   S e t   t h e   e r r o r   c o d e   a n d   e x e c u t e   e r r o r   c a l l b a c k * /  
             S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ U D R ) ;  
         }  
  
         / *   S e t   t h e   I 2 S   S t a t e   r e a d y   * /  
         h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
  
         / *   C a l l   u s e r   e r r o r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
         h i 2 s - > E r r o r C a l l b a c k ( h i 2 s ) ;  
 # e l s e  
         H A L _ I 2 S _ E r r o r C a l l b a c k ( h i 2 s ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
 }  
  
 / * *  
     *   @ b r i e f     T x   T r a n s f e r   H a l f   c o m p l e t e d   c a l l b a c k s  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 S _ T x H a l f C p l t C a l l b a c k ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 s ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 S _ T x H a l f C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k s  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 S _ T x C p l t C a l l b a c k ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 s ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 S _ T x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     R x   T r a n s f e r   h a l f   c o m p l e t e d   c a l l b a c k s  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 S _ R x H a l f C p l t C a l l b a c k ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 s ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 S _ R x H a l f C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k s  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 S _ R x C p l t C a l l b a c k ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 s ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 S _ R x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     I 2 S   e r r o r   c a l l b a c k s  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 S _ E r r o r C a l l b a c k ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 s ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 S _ E r r o r C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *     @ b r i e f       P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p e r m i t s   t o   g e t   i n   r u n - t i m e   t h e   s t a t u s   o f   t h e   p e r i p h e r a l  
         a n d   t h e   d a t a   f l o w .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   I 2 S   s t a t e  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ I 2 S _ S t a t e T y p e D e f   H A L _ I 2 S _ G e t S t a t e ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     r e t u r n   h i 2 s - > S t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   I 2 S   e r r o r   c o d e  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   I 2 S   E r r o r   C o d e  
     * /  
 u i n t 3 2 _ t   H A L _ I 2 S _ G e t E r r o r ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     r e t u r n   h i 2 s - > E r r o r C o d e ;  
 }  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   I 2 S _ P r i v a t e _ F u n c t i o n s   I 2 S   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     D M A   I 2 S   t r a n s m i t   p r o c e s s   c o m p l e t e   c a l l b a c k  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 S _ D M A T x C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I 2 S _ H a n d l e T y p e D e f   * h i 2 s   =   ( I 2 S _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;   / *   D e r o g a t i o n   M I S R A C 2 0 1 2 - R u l e - 1 1 . 5   * /  
  
     / *   i f   D M A   i s   c o n f i g u r e d   i n   D M A _ N O R M A L   M o d e   * /  
     i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L )  
     {  
         / *   D i s a b l e   T x   D M A   R e q u e s t   * /  
         C L E A R _ B I T ( h i 2 s - > I n s t a n c e - > C R 2 ,   S P I _ C R 2 _ T X D M A E N ) ;  
  
         h i 2 s - > T x X f e r C o u n t   =   0 U ;  
         h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
     }  
     / *   C a l l   u s e r   T x   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
     h i 2 s - > T x C p l t C a l l b a c k ( h i 2 s ) ;  
 # e l s e  
     H A L _ I 2 S _ T x C p l t C a l l b a c k ( h i 2 s ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I 2 S   t r a n s m i t   p r o c e s s   h a l f   c o m p l e t e   c a l l b a c k  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 S _ D M A T x H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I 2 S _ H a n d l e T y p e D e f   * h i 2 s   =   ( I 2 S _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;   / *   D e r o g a t i o n   M I S R A C 2 0 1 2 - R u l e - 1 1 . 5   * /  
  
     / *   C a l l   u s e r   T x   h a l f   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
     h i 2 s - > T x H a l f C p l t C a l l b a c k ( h i 2 s ) ;  
 # e l s e  
     H A L _ I 2 S _ T x H a l f C p l t C a l l b a c k ( h i 2 s ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I 2 S   r e c e i v e   p r o c e s s   c o m p l e t e   c a l l b a c k  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 S _ D M A R x C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I 2 S _ H a n d l e T y p e D e f   * h i 2 s   =   ( I 2 S _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;   / *   D e r o g a t i o n   M I S R A C 2 0 1 2 - R u l e - 1 1 . 5   * /  
  
     / *   i f   D M A   i s   c o n f i g u r e d   i n   D M A _ N O R M A L   M o d e   * /  
     i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L )  
     {  
         / *   D i s a b l e   R x   D M A   R e q u e s t   * /  
         C L E A R _ B I T ( h i 2 s - > I n s t a n c e - > C R 2 ,   S P I _ C R 2 _ R X D M A E N ) ;  
         h i 2 s - > R x X f e r C o u n t   =   0 U ;  
         h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
     }  
     / *   C a l l   u s e r   R x   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
     h i 2 s - > R x C p l t C a l l b a c k ( h i 2 s ) ;  
 # e l s e  
     H A L _ I 2 S _ R x C p l t C a l l b a c k ( h i 2 s ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I 2 S   r e c e i v e   p r o c e s s   h a l f   c o m p l e t e   c a l l b a c k  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 S _ D M A R x H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I 2 S _ H a n d l e T y p e D e f   * h i 2 s   =   ( I 2 S _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;   / *   D e r o g a t i o n   M I S R A C 2 0 1 2 - R u l e - 1 1 . 5   * /  
  
     / *   C a l l   u s e r   R x   h a l f   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
     h i 2 s - > R x H a l f C p l t C a l l b a c k ( h i 2 s ) ;  
 # e l s e  
     H A L _ I 2 S _ R x H a l f C p l t C a l l b a c k ( h i 2 s ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I 2 S   c o m m u n i c a t i o n   e r r o r   c a l l b a c k  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 S _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I 2 S _ H a n d l e T y p e D e f   * h i 2 s   =   ( I 2 S _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;   / *   D e r o g a t i o n   M I S R A C 2 0 1 2 - R u l e - 1 1 . 5   * /  
  
     / *   D i s a b l e   R x   a n d   T x   D M A   R e q u e s t   * /  
     C L E A R _ B I T ( h i 2 s - > I n s t a n c e - > C R 2 ,   ( S P I _ C R 2 _ R X D M A E N   |   S P I _ C R 2 _ T X D M A E N ) ) ;  
     h i 2 s - > T x X f e r C o u n t   =   0 U ;  
     h i 2 s - > R x X f e r C o u n t   =   0 U ;  
  
     h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
  
     / *   S e t   t h e   e r r o r   c o d e   a n d   e x e c u t e   e r r o r   c a l l b a c k * /  
     S E T _ B I T ( h i 2 s - > E r r o r C o d e ,   H A L _ I 2 S _ E R R O R _ D M A ) ;  
     / *   C a l l   u s e r   e r r o r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
     h i 2 s - > E r r o r C a l l b a c k ( h i 2 s ) ;  
 # e l s e  
     H A L _ I 2 S _ E r r o r C a l l b a c k ( h i 2 s ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     T r a n s m i t   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 S _ T r a n s m i t _ I T ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     / *   T r a n s m i t   d a t a   * /  
     h i 2 s - > I n s t a n c e - > D R   =   ( * h i 2 s - > p T x B u f f P t r ) ;  
     h i 2 s - > p T x B u f f P t r + + ;  
     h i 2 s - > T x X f e r C o u n t - - ;  
  
     i f   ( h i 2 s - > T x X f e r C o u n t   = =   0 U )  
     {  
         / *   D i s a b l e   T X E   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 S _ D I S A B L E _ I T ( h i 2 s ,   ( I 2 S _ I T _ T X E   |   I 2 S _ I T _ E R R ) ) ;  
  
         h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
         / *   C a l l   u s e r   T x   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
         h i 2 s - > T x C p l t C a l l b a c k ( h i 2 s ) ;  
 # e l s e  
         H A L _ I 2 S _ T x C p l t C a l l b a c k ( h i 2 s ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
 }  
  
 / * *  
     *   @ b r i e f     R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 S _ R e c e i v e _ I T ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s )  
 {  
     / *   R e c e i v e   d a t a   * /  
     ( * h i 2 s - > p R x B u f f P t r )   =   ( u i n t 1 6 _ t ) h i 2 s - > I n s t a n c e - > D R ;  
     h i 2 s - > p R x B u f f P t r + + ;  
     h i 2 s - > R x X f e r C o u n t - - ;  
  
     i f   ( h i 2 s - > R x X f e r C o u n t   = =   0 U )  
     {  
         / *   D i s a b l e   R X N E   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 S _ D I S A B L E _ I T ( h i 2 s ,   ( I 2 S _ I T _ R X N E   |   I 2 S _ I T _ E R R ) ) ;  
  
         h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
         / *   C a l l   u s e r   R x   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
         h i 2 s - > R x C p l t C a l l b a c k ( h i 2 s ) ;  
 # e l s e  
         H A L _ I 2 S _ R x C p l t C a l l b a c k ( h i 2 s ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I 2 S   C o m m u n i c a t i o n   T i m e o u t .  
     *   @ p a r a m     h i 2 s   p o i n t e r   t o   a   I 2 S _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 S   m o d u l e  
     *   @ p a r a m     F l a g   F l a g   c h e c k e d  
     *   @ p a r a m     S t a t e   V a l u e   o f   t h e   f l a g   e x p e c t e d  
     *   @ p a r a m     T i m e o u t   D u r a t i o n   o f   t h e   t i m e o u t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 S _ W a i t F l a g S t a t e U n t i l T i m e o u t ( I 2 S _ H a n d l e T y p e D e f   * h i 2 s ,   u i n t 3 2 _ t   F l a g ,   F l a g S t a t u s   S t a t e ,  
                                                                                                               u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     / *   G e t   t i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   W a i t   u n t i l   f l a g   i s   s e t   t o   s t a t u s * /  
     w h i l e   ( ( ( _ _ H A L _ I 2 S _ G E T _ F L A G ( h i 2 s ,   F l a g ) )   ?   S E T   :   R E S E T )   ! =   S t a t e )  
     {  
         i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f   ( ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   > =   T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
             {  
                 / *   S e t   t h e   I 2 S   S t a t e   r e a d y   * /  
                 h i 2 s - > S t a t e   =   H A L _ I 2 S _ S T A T E _ R E A D Y ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 s ) ;  
  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   S P I _ I 2 S _ S U P P O R T   * /  
  
 # e n d i f   / *   H A L _ I 2 S _ M O D U L E _ E N A B L E D   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  